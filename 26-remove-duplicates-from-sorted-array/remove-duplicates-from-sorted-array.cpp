class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s = {};
        for (int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        } 
        vector<int> temp = {};
        int index = 0;
        for (auto i:s) {
            temp.push_back(i);
        }
        nums = temp;   
        return nums.size();     
    }
};