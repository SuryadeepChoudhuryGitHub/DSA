class Solution(object):
    def reportSpam(self, message, bannedWords):
        count = 0
        s = set(bannedWords)
        if sum(m in s for m in message) >1:
            return True
        else:
            return False