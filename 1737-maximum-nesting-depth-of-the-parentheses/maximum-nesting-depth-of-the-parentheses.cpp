class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int max_depth = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                depth++;
            }
            else if (s[i] == ')') {
                depth--;
            }

            if (depth > max_depth) {
                max_depth = depth;
            }
        }
        return max_depth;
    }
};