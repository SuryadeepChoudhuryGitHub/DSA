class Solution(object):
    def maxArea(self, height):
        left = 0
        right = len(height) - 1
        max_area = 0

        while left < right:
            # calculate area
            width = right - left
            h = min(height[left], height[right])
            area = width * h
            max_area = max(max_area, area)

            # move the pointer that's limiting the height
            if height[left] < height[right]:
                left += 1
            else:
                right -= 1

        return max_area