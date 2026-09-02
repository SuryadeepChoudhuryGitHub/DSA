class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int posetive = 0, negetive = 1, n = nums.size();
        vector<int> output (n, 0);
        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0) {
                output[posetive] = nums[i];
                posetive += 2;
            }
            else if (nums[i] < 0) {
                output[negetive] = nums[i];
                negetive += 2;
            }
        }
        return output;
    }
};