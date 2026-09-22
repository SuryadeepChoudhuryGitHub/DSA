class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for (int i = 0, n = nums.size(); i < n; i++) {
            if (nums [i] == target) {
                return true;
            }
        }
        return false;
    }
};