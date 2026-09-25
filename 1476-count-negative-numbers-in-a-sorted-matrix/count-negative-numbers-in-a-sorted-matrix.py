class Solution(object):
    def countNegatives(self, grid):
        count = 0
        for i in range(0, len(grid)):
            for j in grid[i]:
                if j < 0:
                    count = count + 1
                else:
                    continue
        return count

        