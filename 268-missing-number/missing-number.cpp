class Solution {
public:
    int missingNumber(vector<int>& nums) {
        short length = nums.size();
        short output{0};

        for (short i{0}; i <= length; i++) {
            if (find(nums.begin(), nums.end(), i) == nums.end()) {
                output = i;
                break;
            }
            else {
                continue;
            }
        }
        return output;
    }
};