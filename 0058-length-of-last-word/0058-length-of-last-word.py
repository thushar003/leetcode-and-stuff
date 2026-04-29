class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        splitUp = s.split()
        return len(splitUp[-1])