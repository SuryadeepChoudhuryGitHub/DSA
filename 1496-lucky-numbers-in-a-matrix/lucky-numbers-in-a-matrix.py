class Solution(object):
    def luckyNumbers(self, matrix):
        minimum = []
        for i in matrix:
            minimum.append(min(i))

        maximum = []
        for k in range(0, len(matrix[0])):
            new = []
            for j in matrix:
                new.append(j[k])
            maximum.append(max(new))
        output = []
        for i in maximum:
            if i in minimum:
                output.append(i)
                break
        # if len(maximum) > len(minimum):
        #     for i in maximum:
        #         if i in minimum:
        #             output.append(i)
        # elif len(minimum) > len(maximum):
        #     for i in minimum:
        #         if i in maximum:
        #             output.append(i)

        return output
        