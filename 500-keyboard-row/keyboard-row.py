class Solution(object):
    def findWords(self, words):
        row1 = "qwertyuiop"
        row2 = "asdfghjkl"
        row3 = "zxcvbnm"

        output = []
        # for k in words
        for i in words:
            rows = []
            for j in i.lower():
                if j in row1:
                    rows.append("row1")
                elif j in row2:
                    rows.append("row2")
                elif j in row3:
                    rows.append("row3")
                    
            if len(list(set(rows))) == 1:
                output.append(i)
            else:
                continue

        return output

        
        