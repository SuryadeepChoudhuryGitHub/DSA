class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        #Method 1
        # count_list = []
        # count = 0
        # for i in range(0, len(nums)):
        #     if nums[i] == 1:
        #         count = count + 1
        #     elif:
        #         count_list.append(count)
        #         count = 0

        # return max(count_list)

        #Method 2
        string_nums = ""
        for i in nums:
            string_nums = string_nums + str(i)

        new = string_nums.split("0")
        count_l = []
        for i in range(0, len(new)):
            count_l.append(new[i].count("1"))

        return max(count_l)



        