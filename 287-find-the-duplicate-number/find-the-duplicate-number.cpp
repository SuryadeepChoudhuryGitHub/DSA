class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (size_t i = 0, n = nums.size(); i < n-1; i++) {
            if (nums[i] == nums[i+1]) {
                return nums[i];
            }
            else {
                continue;
            }
        }
        return 0;
    }
};