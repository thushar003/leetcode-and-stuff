class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        charsSet = set()
        maxLen = 0

        left = 0
        for right in range(len(s)):
            while s[right] in charsSet:
                charsSet.remove(s[left])
                left += 1
            charsSet.add(s[right])
            maxLen = max(maxLen, right - left + 1)
            
        return maxLen
