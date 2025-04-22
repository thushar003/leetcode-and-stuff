class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        isNegative = False
        if x < 0:
            isNegative = True
        xString = str(abs(x))
        revString = xString[::-1]

        resultVal = int(revString)
        if isNegative == True:
            resultVal = -resultVal
        
        if resultVal < -2**31 or resultVal > 2**31 - 1:
            return 0
        return resultVal