class Solution(object):
    def countKDifference(self, nums, k):
        count = 0

        for i in range(0, len(nums)):
            for j in range(0, len(nums)):
                if nums[j] - nums[i] == k or nums[i] - nums[j] == -k:
                    count = count + 1
                else:
                    continue

        return count
        