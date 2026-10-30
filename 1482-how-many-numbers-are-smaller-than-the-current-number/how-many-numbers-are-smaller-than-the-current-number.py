class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        smaller = []
        for i in range(0, len(nums)):
            freq = 0
            for j in range(0, len(nums)):
                if nums[j] < nums[i]:
                    freq = freq + 1
                else:
                    continue
            smaller.append(freq)

        return smaller
        