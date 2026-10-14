class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int output = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i-k < 0 && i+k > nums.size()-1) {
                output += nums[i];
            }
            else if (i-k < 0) {
                if (nums[i] > nums[i+k]) {
                    output += nums[i];

                }
            }
            else if (i+k > nums.size()-1) {
                if (nums[i] > nums[i-k]) {
                    output += nums[i];

                }
            }
            else if (nums[i] > nums[i-k] && nums[i] > nums[i+k]) {
                output += nums[i];
            }
        }
        return output;
        
    }
};