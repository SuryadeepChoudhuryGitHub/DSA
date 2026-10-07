class Solution(object):
    def threeConsecutiveOdds(self, arr):
        count = 0
        output = False
        for i in range(0, len(arr)):
            if arr[i]%2 != 0:
                count = count + 1
                if count == 3:
                    output = True
                    break
                else:
                    continue

            elif i == len(arr) -1 and arr[i]%2 == 0:
                output = False

            else:
                count = 0

        return output
        