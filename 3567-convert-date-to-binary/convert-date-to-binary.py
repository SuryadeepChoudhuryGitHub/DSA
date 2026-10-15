class Solution(object):
    def convertDateToBinary(self, date):
        new = date.split("-")
        new[0] = (bin(int(new[0]))[2::])
        new[1] = (bin(int(new[1]))[2::])
        new[2] = (bin(int(new[2]))[2::])

        output = new[0]+"-"+new[1]+"-"+new[2]

        return output