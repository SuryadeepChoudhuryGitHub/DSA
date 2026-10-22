class Solution(object):
    def check(self, nums):
        output = False
        for i in range(0, len(nums)):
            new = sorted(nums)
            if new == nums:
                output = True
            else:
                nums.append(nums[0])
                del nums[0]
                
        return output   
        