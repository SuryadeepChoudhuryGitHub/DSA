class Solution(object):
    def countDigits(self, num):
        count = 0
        s = str(num)
        for i in s:
            if num%int(i) == 0:
                count += 1
            else:
                continue

        return count
        