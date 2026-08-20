class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if (nums.size() ==1) {
            return 1;
        }
        else if (nums.size() == 0) {
            return 0;
        }
        int maximum = 0;
        int minimum = 0;
        for (int i = 1, n = nums.size(); i < n; i++) {
            if (nums[i] > nums[maximum]) {
                maximum = i;
            }
        }

        for (int i = 1, n = nums.size(); i < n; i++) {
            if (nums[i] < nums[minimum]) {
                minimum = i;
            }
        }
        vector<int> ways = {NULL, NULL, NULL};
        if (maximum < minimum) {
            ways[0] = minimum + 1;
            ways[1] = nums.size() - maximum;
            ways[2] = (maximum + 1) + (nums.size()- minimum);
        }
        else if (maximum > minimum) {
            ways[0] = maximum + 1;
            ways[1] = nums.size() - minimum;
            ways[2] = (minimum + 1) + (nums.size() - maximum);
        }
        sort(ways.begin(), ways.end());
        return ways[0];
    }
};