class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        romanDict = {"I" : 1, "V" : 5, "X" : 10, "L" : 50, "C" : 100, "D" : 500, "M" : 1000}

        currentVal = 0
        prevVal = 0

        for c in reversed(s):
            value = romanDict[c]
            if value < prevVal:
                currentVal -= value
            else:
                currentVal += value
            prevVal = value
        
        return currentVal