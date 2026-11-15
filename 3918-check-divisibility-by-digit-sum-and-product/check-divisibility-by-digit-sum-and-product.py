class Solution(object):
    def checkDivisibility(self, n):
        strn = str(n)
        product = 1
        summation = 0
        for i in strn:
            product = product * int(i)

        for j in strn:
            summation = summation + int(j)

        if n%(product + summation) == 0:
            return True
        else:
            return False


        
        