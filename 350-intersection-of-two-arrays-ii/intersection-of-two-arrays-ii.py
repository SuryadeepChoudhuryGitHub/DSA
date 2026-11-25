class Solution(object):
    def intersect(self, nums1, nums2):
        output = []
        n1 = nums1
        n2 = nums2
        if len(n1) >= len(n2):
            for i in range(0, len(n2)):
                for j in range(0, len(n1)):
                    if nums2[i] == nums1[j]:
                        output.append(nums2[i])
                        nums1[j] = None
                        nums2[i] = None
                        break
                    else:
                        continue
        elif len(n1) <= len(n2):
            for i in range(0, len(n1)):
                for j in range(0, len(n2)):
                    if nums2[j] == nums1[i]:
                        output.append(nums1[i])
                        nums1[i] = None
                        nums2[j] = None
                        break
                    else:
                        continue

        return output