#!/usr/bin/env python3
"""
generate_stats.py

Scans every LeetSync problem folder in this repo (each folder = one
LeetCode submission, containing a README.md with a difficulty badge and
one solution file) and regenerates STATS.md with up-to-date totals.

Run manually:
    python3 scripts/generate_stats.py

Or let the GitHub Action (.github/workflows/update-stats.yml) run it
automatically every time LeetSync pushes a new solution.
"""

import os
import re
from collections import Counter
from datetime import datetime, timezone

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
OUTPUT_FILE = os.path.join(REPO_ROOT, "STATS.md")

# Folders to ignore when scanning for problem directories
IGNORE_DIRS = {".git", ".github", "scripts", "node_modules"}

DIFFICULTY_RE = re.compile(r"Difficulty-(Easy|Medium|Hard)", re.IGNORECASE)
TITLE_LINK_RE = re.compile(r'<a href="(https://leetcode\.com/problems/[^"]+)">([^<]+)</a>')

EXT_LANGUAGE = {
    ".py": "Python",
    ".cpp": "C++",
    ".cc": "C++",
    ".c": "C",
    ".java": "Java",
    ".js": "JavaScript",
    ".ts": "TypeScript",
    ".go": "Go",
    ".rs": "Rust",
    ".rb": "Ruby",
    ".cs": "C#",
    ".kt": "Kotlin",
    ".swift": "Swift",
}

DIFFICULTY_EMOJI = {"Easy": "🟢", "Medium": "🟡", "Hard": "🔴"}


def find_problem_dirs():
    dirs = []
    for entry in sorted(os.listdir(REPO_ROOT)):
        full = os.path.join(REPO_ROOT, entry)
        if not os.path.isdir(full) or entry in IGNORE_DIRS or entry.startswith("."):
            continue
        if os.path.isfile(os.path.join(full, "README.md")):
            dirs.append(entry)
    return dirs


def parse_problem(folder_name):
    folder_path = os.path.join(REPO_ROOT, folder_name)
    readme_path = os.path.join(folder_path, "README.md")

    with open(readme_path, "r", encoding="utf-8", errors="ignore") as f:
        content = f.read()

    diff_match = DIFFICULTY_RE.search(content)
    difficulty = diff_match.group(1).capitalize() if diff_match else "Unknown"

    title_match = TITLE_LINK_RE.search(content)
    if title_match:
        url, title = title_match.group(1), title_match.group(2)
    else:
        url, title = None, folder_name

    # Find the solution file (first non-README file) to detect language
    language = "Unknown"
    for fname in sorted(os.listdir(folder_path)):
        if fname == "README.md":
            continue
        ext = os.path.splitext(fname)[1].lower()
        if ext in EXT_LANGUAGE:
            language = EXT_LANGUAGE[ext]
            break

    # LeetCode problem number is the leading digits of the folder name
    num_match = re.match(r"^(\d+)-", folder_name)
    number = int(num_match.group(1)) if num_match else None

    return {
        "folder": folder_name,
        "number": number,
        "title": title,
        "url": url,
        "difficulty": difficulty,
        "language": language,
    }


def build_markdown(problems):
    total = len(problems)
    diff_counts = Counter(p["difficulty"] for p in problems)
    lang_counts = Counter(p["language"] for p in problems)

    easy = diff_counts.get("Easy", 0)
    medium = diff_counts.get("Medium", 0)
    hard = diff_counts.get("Hard", 0)

    def pct(n):
        return f"{(n / total * 100):.1f}%" if total else "0.0%"

    lines = []
    lines.append("# 📊 DSA Progress Tracker")
    lines.append("")
    lines.append(
        "> Auto-generated from this repo's LeetSync submissions. "
        "Do not edit by hand — run `scripts/generate_stats.py` "
        "(or push a new solution) to refresh."
    )
    lines.append("")
    lines.append(
        f"**Last updated:** {datetime.now(timezone.utc).strftime('%Y-%m-%d %H:%M UTC')}"
    )
    lines.append("")

    lines.append("## Overview")
    lines.append("")
    lines.append("| Metric | Count |")
    lines.append("|---|---|")
    lines.append(f"| **Total Solved** | **{total}** |")
    lines.append(f"| 🟢 Easy | {easy} ({pct(easy)}) |")
    lines.append(f"| 🟡 Medium | {medium} ({pct(medium)}) |")
    lines.append(f"| 🔴 Hard | {hard} ({pct(hard)}) |")
    lines.append("")

    # Simple text progress bar per difficulty
    lines.append("## Difficulty Breakdown")
    lines.append("")
    for label, count in (("Easy", easy), ("Medium", medium), ("Hard", hard)):
        bar_len = 20
        filled = round((count / total) * bar_len) if total else 0
        bar = "█" * filled + "░" * (bar_len - filled)
        lines.append(f"- {DIFFICULTY_EMOJI[label]} **{label}**: `{bar}` {count}")
    lines.append("")

    lines.append("## Language Breakdown")
    lines.append("")
    lines.append("| Language | Solved |")
    lines.append("|---|---|")
    for lang, count in lang_counts.most_common():
        lines.append(f"| {lang} | {count} |")
    lines.append("")

    lines.append("## Solved Problems")
    lines.append("")
    lines.append("| # | Problem | Difficulty | Language |")
    lines.append("|---|---|---|---|")
    for p in sorted(problems, key=lambda x: (x["number"] is None, x["number"])):
        num = p["number"] if p["number"] is not None else "—"
        title_cell = f"[{p['title']}]({p['url']})" if p["url"] else p["title"]
        emoji = DIFFICULTY_EMOJI.get(p["difficulty"], "")
        lines.append(f"| {num} | {title_cell} | {emoji} {p['difficulty']} | {p['language']} |")
    lines.append("")

    return "\n".join(lines)


def main():
    problem_dirs = find_problem_dirs()
    problems = [parse_problem(d) for d in problem_dirs]
    markdown = build_markdown(problems)

    with open(OUTPUT_FILE, "w", encoding="utf-8") as f:
        f.write(markdown)

    print(f"Scanned {len(problems)} problems. Wrote {OUTPUT_FILE}")


if __name__ == "__main__":
    main()
