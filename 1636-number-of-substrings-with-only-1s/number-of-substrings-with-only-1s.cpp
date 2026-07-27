class Solution {
public:
    int numSub(string s) {
        long int output = 0;
        int n = s.size();
        vector<int> subset_gp = {};
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                int count = 0;
                for (int j = i; j < n; j++) {
                    if (s[j] == '0') {
                        break; 
                    }
                    count++;
                }   
                subset_gp.push_back(count);
                i += count -1;
            }
        }
        for (int i = 0; i < subset_gp.size(); i++) {
            long int m = subset_gp[i];
            const int MOD = 1e9 + 7;
            output = (output + (m * (m + 1) / 2) % MOD) % MOD;
        }
        return output;
    }
};