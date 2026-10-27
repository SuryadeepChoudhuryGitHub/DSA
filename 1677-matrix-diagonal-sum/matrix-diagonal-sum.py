class Solution(object):
    def diagonalSum(self, mat):
        length = len(mat) -1
        add = 0
        if len(mat)%2 == 0:
            for i in range(0, len(mat)):
                add = add + mat[i][i]

            for j in range(0, len(mat)):
                add = add + mat[j][length]
                length = length -1

        else:
            for i in range(0, len(mat)):
                add = add + mat[i][i]

            for j in range(0, len(mat)):
                add = add + mat[j][length]
                length = length -1
                
            middle = (len(mat)+1)/2
            add = add - mat[middle -1][middle-1]

        return add

        