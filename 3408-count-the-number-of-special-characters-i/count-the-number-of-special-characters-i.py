class Solution(object):
    def numberOfSpecialChars(self, word):
        count = 0
        new = list(set(word))
        for i in new:
            if i.islower() and i.upper() in word:
                count += 1
            else:
                continue

        return count

        