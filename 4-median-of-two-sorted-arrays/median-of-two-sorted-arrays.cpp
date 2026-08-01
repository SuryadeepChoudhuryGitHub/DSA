class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        int n1 = nums1.size(), n2 = nums2.size();
        vector<int> output = {};
        
        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                output.push_back(nums1[i]);
                i++;
            }
            else if (nums1[i] > nums2[j]) {
                output.push_back(nums2[j]);
                j++;
            }
            else if (nums1[i] == nums2[j]) {
                output.push_back(nums1[i]);
                output.push_back(nums2[j]);
                i++;
                j++;
            }
        }
        while (i < n1) {
            output.push_back(nums1[i]);
            i++;
        }

        while (j < n2) {
            output.push_back(nums2[j]);
            j++;
        }
        int length = (n1 + n2);
        double median;
        if (length%2 == 0) {
            median = (output[(length/2)] + output[(length/2)-1])/2.0;
        }        
        else {
            median = output[length/2];
        }
        return median;
    }
};