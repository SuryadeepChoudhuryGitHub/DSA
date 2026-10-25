class Solution(object):
    def heightChecker(self, heights):
        original = tuple(heights)
        heights.sort()
        count = 0
        for i in range(0, len(original)):
            if original[i] != heights[i]:
                count = count + 1
            else:
                continue
        return count