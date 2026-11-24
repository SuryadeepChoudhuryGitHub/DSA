class Solution(object):
    def findFinalValue(self, nums, original):
        for i in range(0, len(nums)):
            if original in nums:
                original = original * 2
            else:
                continue
        return original
        