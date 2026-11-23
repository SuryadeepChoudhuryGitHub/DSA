class Solution(object):
    def sumOfTheDigitsOfHarshadNumber(self, x):
        strx = str(x)
        add = 0
        for i in strx:
            add = add + int(i)

        if x%add == 0:
            return add
        else:
            return -1
        