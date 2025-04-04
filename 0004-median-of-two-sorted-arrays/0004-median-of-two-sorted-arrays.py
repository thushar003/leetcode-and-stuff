class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        nums3 = list()
        for x in nums1:
            nums3.append(x)
        for y in nums2:
            nums3.append(y)
        nums3.sort()

        mergedLen = len(nums3)
        if (mergedLen % 2 != 0):
            return (float)(nums3[mergedLen // 2])
        else:
            return (float)((nums3[mergedLen // 2 - 1] + nums3[mergedLen // 2]) / 2.0)
