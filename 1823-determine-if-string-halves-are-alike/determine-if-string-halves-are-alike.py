class Solution(object):
    def halvesAreAlike(self, s):
        new = s.lower()
        a = new[0:int(len(new)/2)]
        b = new[int(len(new)/2):len(new)]

        vowels = ['a', 'e', 'i', 'o', 'u']

        a_count = 0
        b_count = 0
        for i in vowels:
            for j in a:
                if i == j:
                    a_count = a_count + 1

            for k in b:
                if i == k:
                    b_count = b_count + 1

        if a_count == b_count:
            return True
        else:
            return False
        