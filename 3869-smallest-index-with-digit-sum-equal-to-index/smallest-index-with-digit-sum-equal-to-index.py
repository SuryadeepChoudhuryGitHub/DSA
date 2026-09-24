class Solution(object):
    def smallestIndex(self, nums):
        for i in range(0, len(nums)):
            stringi =list(str(nums[i]))
            new = []
            for j in range(0,len(stringi)):
                new.append(int(stringi[j]))

            if sum(new) == i:
                return i
            
            elif sum(new) != i and i == len(nums) -1:
                return -1
            else:
                continue

        