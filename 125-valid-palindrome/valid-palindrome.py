class Solution(object):
    def isPalindrome(self, s):
        new = s.replace(" ", "")
        misc = ["~", "`", "!", "@", "#", "$", "%", "^", "&", "*", "(", ")", "-", "_", "+", "=", "[", "]", "{", "}", "|", ";",
        ":", "'", '"', ",", ".", "<", ">", "/", "?", "\\"]
        i = 0
        # new1 = (((new.replace(",", "")).replace(":", "")).replace(".", "")).replace(".", "")

        for i in misc:
            new = new.replace(i, "")

        new1 = new.lower()
        
        if new1.lower() == new1[::-1].lower():
            return True
        else:
            return False
        