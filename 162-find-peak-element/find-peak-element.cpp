class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maximum = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[maximum]) {
                maximum = i;
            }
        }
        return maximum;
    }
};