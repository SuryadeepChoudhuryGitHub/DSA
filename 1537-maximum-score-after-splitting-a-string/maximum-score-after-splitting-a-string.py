class Solution(object):
    def maxScore(self, s):
        
        score = []
        for i in range(0, len(s)-1):
            right = []
            left = []
            for j in range(0, i+1):
                left.append(s[j])
            for k in range(i+1, len(s)):
                right.append(s[k])

            score.append(left.count("0") + right.count("1"))
        return max(score)


        