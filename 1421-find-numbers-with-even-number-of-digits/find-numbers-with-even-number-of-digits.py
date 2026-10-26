class Solution(object):
    def findNumbers(self, nums):
        even = []
        for i in nums:
            # new = str(i)
            if len(str(i))%2 == 0:
                even.append(i)
            else:
                continue
        return len(even)
                    

        