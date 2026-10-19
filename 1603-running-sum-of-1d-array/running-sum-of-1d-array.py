class Solution(object):
    def runningSum(self, nums):
        output = []
        total = 0
        for i in nums:
            total = total + i
            output.append(total)

        return output

        