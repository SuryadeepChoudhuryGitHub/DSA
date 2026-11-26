class Solution(object):
    def findCenter(self, edges):
        output = 0
        for i in range(0, 2):
            count = 0
            for j in range(1, len(edges)):
                if edges[0][i] in edges[j]:
                    count += 1
                else:
                    continue
            if count == len(edges)-1:
                output = edges[0][i]
                break 
            else:
                continue

        return output
        