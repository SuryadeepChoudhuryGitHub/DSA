class Solution(object):
    def defangIPaddr(self, address):
        output = ""
        for i in address:
            if i == ".":
                output = output + "[.]"
            else:
                output = output + i

        return output
        