class Solution(object):
    def shuffle(self, nums, n):
        output = []
        for i in range(0, len(nums)/2):
            output.append(nums[i])
            output.append(nums[n + i])

        return output
        