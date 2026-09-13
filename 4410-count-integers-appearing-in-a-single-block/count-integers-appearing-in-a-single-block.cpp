class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_set<int> seen;
        unordered_set<int> ended;
        
        int special = 0;
        
        for (int i = 0; i < nums.size(); i++) {
        
            if (i == 0 || nums[i] != nums[i - 1]) {                
                if (seen.count(nums[i])) {
                    ended.insert(nums[i]);
                } else {
                    seen.insert(nums[i]);
                    special++;
                }
            }
        }
        
        return special - ended.size();
    }
};