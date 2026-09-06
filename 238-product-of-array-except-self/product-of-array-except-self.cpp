class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total = 1;
        int zero_total = 1;
        int zero_count = 0;
        for (int i: nums) {
            if (i == 0 && zero_count == 0) {
                zero_count++;
                total = 0;
            }
            else if (zero_count > 0 && i != 0) {
                zero_total = zero_total * i;
            }
            else {
                total = total * i;
                zero_total = total;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (zero_count > 1) {
                nums[i] = 0;
            }
            else if (nums[i] == 0) {
                nums[i] = zero_total;
            }
            else {
                nums[i] = total/nums[i];
            }
        }
        return nums;

    }
};