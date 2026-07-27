class Solution(object):
    def maxProduct(self, nums):
        maximum = []
        for i in range(0, len(nums)):
            for j in range(0, len(nums)):
                if i != j:
                    maximum.append((nums[i]-1) * (nums[j]-1))
                else:
                    continue
        return max(maximum)
        