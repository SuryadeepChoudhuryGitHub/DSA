class Solution(object):
    def findLucky(self, arr):
        set_arr = list(set(arr))
        lucky = []

        for i in set_arr:
            if arr.count(i) == i:
                lucky.append(i) 
            else:
                continue
            
        if len(lucky) == 0:
            return -1
        else:
            return max(lucky)
        