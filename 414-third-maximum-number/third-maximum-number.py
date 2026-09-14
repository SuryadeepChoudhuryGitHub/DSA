class Solution(object):
    def thirdMax(self, nums):
        conv = list(set(nums))
        conv.sort(reverse = True)
        
        if len(conv) >= 3:
            return conv[2]
        else:
            return conv[0] 
        