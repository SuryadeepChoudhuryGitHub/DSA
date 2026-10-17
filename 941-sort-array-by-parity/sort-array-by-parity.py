class Solution(object):
    def sortArrayByParity(self, nums):
        output = []
        for i in nums:
            if i%2 == 0:
                output.append(i)
        for j in nums:
            if j%2 != 0:
                output.append(j)

        return output
        