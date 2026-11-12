class Solution(object):
    def maxDistance(self, colors):
        distances = []
        for i in range(0, len(colors)-1):
            for j in range(i+1, len(colors)):
                if colors[i] != colors[j]:
                    distances.append(abs(i-j))
                else:
                    continue
        return max(distances)
        