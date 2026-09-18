class Solution(object):
    def distributeCandies(self, candyType):
        s = list(set(candyType))
        max = len(candyType)/2
        if len(s) >= max:
            return max
        elif len(s) < max:
            return len(s)

        