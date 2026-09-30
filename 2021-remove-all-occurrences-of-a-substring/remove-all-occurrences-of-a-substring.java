class Solution {
    public String removeOccurrences(String s, String part) {
        // String newString = new String(s);
        while (s.contains(part)) {
            s = s.replaceFirst(part, "");
        }
        return s;
    }
}