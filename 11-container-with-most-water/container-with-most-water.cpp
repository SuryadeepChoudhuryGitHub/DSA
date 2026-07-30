class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1, max_area = 0;
        
        while (left < right) {
            // calculate area
            int width = right - left;
            int h = min(height[left], height[right]);
            int area = width * h;
            max_area = max(max_area, area);

            //move the pointer that's limiting the height
            if (height[left] < height[right]) {
                left += 1;
            }
            else {
                right -= 1;
            }
        }
        return max_area;
    }
};