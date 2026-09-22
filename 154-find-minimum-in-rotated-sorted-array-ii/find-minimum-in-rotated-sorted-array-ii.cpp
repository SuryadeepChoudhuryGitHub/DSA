class Solution {
public:
    int findMin(vector<int>& nums) {
        int minimum = nums[0];
        for (int i = 1, n = nums.size(); i < n; i++) {
            if (nums[i] < minimum) {
                minimum = nums[i];
            }
        }
        return minimum;
    }
};