class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> count;
        for (int i = 0, n = nums.size(); i < n; i++) {
            count[nums[i]]++;
        }

        for (int i = 0, n = nums.size(); i < n; i++) {
            if (count[nums[i]] == 1) {
                return nums[i];
            }
        }
        return -1;
    }
};