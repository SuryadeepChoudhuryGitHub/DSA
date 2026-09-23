class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        for (int i = 0, n = nums.size(); i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
            // Check prime
            int prime = 0;
            for (int j = 2; j <= count; j++) {
                if (count%j == 0) {
                    prime++;
                }
            }
            if (prime == 1) {
                return true;
            }
        }
        return false;
    }
};