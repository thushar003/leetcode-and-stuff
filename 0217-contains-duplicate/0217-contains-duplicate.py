class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        hashSet = set()
        for x in nums:
            if x in hashSet:
                return True
            hashSet.add(x)
        return False
        