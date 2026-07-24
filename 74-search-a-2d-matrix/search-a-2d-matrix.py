class Solution(object):
    def searchMatrix(self, matrix, target):
        for i in range(0, len(matrix)):
            if target in matrix[i]:
                output = True
                break
            elif target not in matrix[i] and i ==  len(matrix) -1:
                output = False
            else:
                continue

        return output


        