class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> output = {};
        int length = nums.size()-1;
        sort(nums.begin(), nums.end());
        
        for (int i = nums[0]; i<= nums[length]; i++) {
            size_t count{0};
            for (int j: nums) {
                if (j == i) {
                    count = 1;
                    break;
                }
                else{
                    continue;
                }
            }
            if (count == 0) {
                output.push_back(i);
            }
            else{
                continue;
            }
        }
        return output;
    }
};