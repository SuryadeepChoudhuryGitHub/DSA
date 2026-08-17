class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int skip = 1;
        for (int i = 0 ; i < nums.size(); i += skip) {
            if (i == nums.size()-1) {
                return nums[i];
            }
            int count = 0;
            for (int j = i; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
                else{
                    if (count == 1) {
                        return nums[i];
                    }
                    skip = count;
                    break;
                }
            }
        }
        return -1;
    }
};