class Solution(object):
    def arrayStringsAreEqual(self, word1, word2):
        test1 = ""
        test2 = ""
        for i in word1:
            test1 = test1 + i

        for j in word2:
            test2 = test2 + j

        if test1 == test2:
            return True
        else:
            return False
        