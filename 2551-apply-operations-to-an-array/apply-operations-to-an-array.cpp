class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        size_t n = nums.size();
        vector<int> output (n,0);
        for (size_t i = 0; i < n-1; i++) {
            if (nums[i] == nums[i+1]) {
                nums[i] = nums[i] * 2;
                nums[i+1] = 0;
            }
        }
        size_t j = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                output[j] = nums[i];
                j++;
            }
        }
        return output;
    }
};