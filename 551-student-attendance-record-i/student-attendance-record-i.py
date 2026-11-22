class Solution(object):
    def checkRecord(self, s):
        freq = 0
        count = 1
        for i in range(0, len(s)-1):
            if s[i] == "L" and s[i+1] == "L":
                count = count + 1
                if count >= 3:
                    break
            else:
                count = 1

        if count >= 3:
            freq = 1 

        if s.count("A") > 1:
            freq = freq + 1

        if freq == 2 or freq == 1:
            return False
        else:
            return True


        
        