class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int middle = nums.size()/2;
        map<int, int> count;
        for (int i = 0, n = nums.size(); i < n; i++) {
            count[nums[i]]++;
        }
        if (count[nums[middle]] == 1) {
            return true;
        }
        else {
            return false;
        }
    }
};