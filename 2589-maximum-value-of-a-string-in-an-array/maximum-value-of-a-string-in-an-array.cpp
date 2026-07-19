class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maximum = 0;
        for (int i = 0, n = strs.size(); i < n; i++) {
            int length = 0;
            bool alpha = false;
            for (int j = 0, m = strs[i].size(); j < m; j++) {
                if ((strs[i][j] > 64 && strs[i][j] <= 90) || (strs[i][j] > 96 && strs[i][j] <= 122)) {
                    length = m;
                    alpha = true;
                    break;
                }
            }
            if (!alpha) {
                length = stoi(strs[i]);
            }
            if (length > maximum){
                maximum = length;
            }
        }
        return maximum;
    }
};