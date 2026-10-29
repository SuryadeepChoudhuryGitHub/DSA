class Solution(object):
    def addDigits(self, num):
        digstring = str(num)
        
        j = 0
        while True:
            sum = 0
            if len(digstring) == 1:
                output = int(digstring)
                break
            for i in digstring:
                sum = sum + int(i)
                digstring = str(sum)
                j = j+ 1

        return output

            
        