class Solution(object):
    def restoreString(self, s, indices):
        output = []
        for i in range(0, len(s)):
            output.append(0)

        for j in range(0, len(s)):
            output[indices[j]] = s[j]

        out = ""
        for k in output:
            out = out + str(k)

        return out



        # slist = list(s)
        # original = indices
        # output = ""
        # indices.sort()
        # for i in indices:
        #     output = output + slist[original.index(i)]

        # return output
        