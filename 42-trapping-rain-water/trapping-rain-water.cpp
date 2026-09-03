class Solution {
public:
    int trap(vector<int>& height) {
        int area = 0;
        int left = 0;
        int right = height.size() -1;
        int maxLeft = height[left];      
        int maxRight = height[right];   

        while (left < right) {
            if (maxLeft < maxRight) {
                left++;
                maxLeft = max(maxLeft, height[left]);
                area += maxLeft - height[left];
            }
            else if (maxLeft > maxRight) {
                right--;
                maxRight = max(maxRight, height[right]);
                area += maxRight - height[right];
            }
            else {
                left++;
                maxLeft = max(maxLeft, height[left]);
                area += maxLeft - height[left];
            }
        }  
        return area;
    }
};