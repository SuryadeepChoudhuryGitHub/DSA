class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int output = 0;
        for (int i:nums) {
            output = output ^ i;
        }
        return output;
    }
};