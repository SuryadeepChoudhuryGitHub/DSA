class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> output = {};
        int skip = 1;
        for (int i = 0; i < nums.size()-1;i += skip) {
            skip = 1;
            if (nums[i] == nums[i+1]) {
                output.push_back(nums[i]);
                skip = 2;
            }
        }
        return output;
    }
};