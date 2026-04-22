class Solution(object):
    def dailyTemperatures(self, temperatures):
        """
        :type temperatures: List[int]
        :rtype: List[int]
        """
        dayList = [0] * len(temperatures)
        stack = []

        for i, j in enumerate(temperatures):
            while stack and j > stack[-1][0]:
                stackT, stackInd = stack.pop()
                dayList[stackInd] = i - stackInd
            stack.append((j, i))
        return dayList