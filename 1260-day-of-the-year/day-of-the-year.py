class Solution(object):
    def dayOfYear(self, date):
        new = date.split("-")
        for i in range(0, len(new)):
            new[i] = int(new[i])
        months_n = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        months_l = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        if new[0]%4 == 0 and new[0] != 1900:
            output = sum(months_l[0:(new[1]-1)]) + new[2]
        elif new[0] == 1900:
            output = sum(months_n[0:(new[1]-1)]) + new[2]
        else:
            output = sum(months_n[0:(new[1]-1)]) + new[2]
        return output
        