class Solution(object):
    def intersection(self, nums1, nums2):
        s1 = set(nums1)
        s2 = set(nums2)
        
        output = list(s1.intersection(s2))
        
        return(output)
        