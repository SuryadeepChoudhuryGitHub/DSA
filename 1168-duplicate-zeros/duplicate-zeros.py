class Solution(object):
    def duplicateZeros(self, arr):
        i = 0
        while i < len(arr):
            if arr[i] == 0:
                arr.insert(i+1, 0)
                del arr[-1]
                i = i+2
            else:
                i = i+ 1

        return arr
        