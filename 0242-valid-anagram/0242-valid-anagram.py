class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        letterDictionary1 = {}
        letterDictionary2 = {}
        for c in s:
            letterDictionary1[c] = letterDictionary1.get(c, 0) + 1
        for c in t:
            letterDictionary2[c] = letterDictionary2.get(c, 0) + 1
        
        if letterDictionary1 == letterDictionary2:
            return True
        else:
            return False