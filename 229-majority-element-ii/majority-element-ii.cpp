class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> hash; // initializing vector with n values
        vector<int> output = {};
        for (int i = 0, n = nums.size(); i < n; i++) {
            hash[nums[i]] += 1;
        }

        for (auto i : hash) {
            if (i.second > nums.size()/3) {
                output.push_back(i.first);
            }
        }
        return output;
        
    }
};