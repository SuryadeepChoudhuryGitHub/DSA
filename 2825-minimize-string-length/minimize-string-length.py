class Solution(object):
    def minimizedStringLength(self, s):
        list_s = []
        for i in s:
            list_s.append(i)

        set_s = list(set(list_s))
        output = ""
        for i in set_s:
            output = output + i

        return len(output)
        