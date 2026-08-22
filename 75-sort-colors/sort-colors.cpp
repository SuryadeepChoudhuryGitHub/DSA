class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int minimum = i;
            for (int j = i+1; j < n; j++) {
                if (nums[j] < nums[minimum]) {
                    minimum = j;
                }
            }
            int temp = nums[i];
            nums[i] = nums[minimum];
            nums[minimum] = temp;
        }
    }
};