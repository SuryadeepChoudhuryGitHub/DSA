class Solution(object):
    def maxProduct(self, n):
        new = list(str(n))
        prod = []
        for i in range(0, len(new)):
            for j in range(i+1, len(new)):
                prod.append(int(new[i])*int(new[j]))

        return max(prod)
        