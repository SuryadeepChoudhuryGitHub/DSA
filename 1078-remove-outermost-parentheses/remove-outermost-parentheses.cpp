class Solution {
public:
    string removeOuterParentheses(string s) {
        int degree = 0;
        string output = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (degree == 0) {
                    s[i] = '0';
                }
                degree++;
            }
            else if (s[i] == ')') {
                if (degree == 1) {
                    s[i] = '0';
                }
                degree--;
            }
        }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0') {
                output += s[i];
            }
        }
        return output;
    }
};