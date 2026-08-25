class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int n = s.size();
        int output = 0;
        map<char,int> counts;
        for (int j = 0; j < n; j++) {
            counts[s[j]]++;
            if (counts[s[j]] == 2) {
                if (j-i>output) {
                    output = j-i;
                }
                while (s[i] != s[j]) {
                    counts[s[i]]--;
                    i++;
                }
                counts[s[i]]--;
                i++;
            }
            else if (j-i + 1 > output) {
                output = j-i +1;
            }
        }
        return output;
    }
};