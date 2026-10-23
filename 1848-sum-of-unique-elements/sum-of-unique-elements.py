class Solution(object):
    def sumOfUnique(self, nums):
        unique = [] # This holds all the unique values
        for i in nums:
            if nums.count(i) == 1:
                unique.append(i)
            else:
                continue

        return(sum(unique))
        