class Solution(object):
    def uniqueOccurrences(self, arr):
        countl = []
        set_arr = list(set(arr))
        for i in set_arr:
            countl.append(arr.count(i))

        if len(countl) == len(list(set(countl))):
            return True
        else:
            return False
        