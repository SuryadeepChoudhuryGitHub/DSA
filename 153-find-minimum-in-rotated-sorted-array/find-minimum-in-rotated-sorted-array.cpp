class Solution {
public:
    int findMin(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // return nums[0];
        int minimum = nums[0];
        for (int i = 0, n = nums.size(); i < n; i++) {
            if (nums[i] < minimum) {
                minimum = nums[i];
            }
        }
        return minimum;
    }
};