class Solution(object):
    def findGCD(self, nums):
        maximum = max(nums)
        minimum = min(nums)
        divisors = []
        for i in range(1, minimum+1):
            if maximum%i == 0 and minimum%i == 0:
                divisors.append(i)
            else:
                continue
        return max(divisors)
        