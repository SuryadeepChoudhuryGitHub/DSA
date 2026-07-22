class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maximum = 0;
        for (int i = 1, n = arr.size(); i < n; i++) {
            if (arr[i] > arr[maximum]) {
                maximum = i;
            }
        }
        return maximum;
    }
};