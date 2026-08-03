class Solution:
    def superPow(self, a, b):
        b=''.join(map(str,b))
        b=int(b)
        return pow(a,b,1337)
        