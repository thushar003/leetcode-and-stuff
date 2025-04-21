class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        if len(nums) < 3:
            return []
        elif len(nums) == 3 and sum(nums) == 0:
            return [nums]
        nums = sorted(nums)
        solutions = []
        i = 0
        while i < len(nums) - 2:
            if i > 0 and nums[i] == nums[i - 1]:
                i += 1
                continue
            j = i + 1
            k = len(nums) - 1
            target = 0 - nums[i]
            while (j < k):
                if j > i + 1 and nums[j] == nums[j - 1]:
                    j += 1
                    continue
                if k > len(nums) - 1 and nums[k] == nums[k + 1]:
                    k -= 1
                    continue
                twoSum = nums[j] + nums[k]
                if twoSum == target:
                    solutions.append([nums[i], nums[j], nums[k]])
                if twoSum > target:
                    k -= 1
                else:
                    j += 1
            i += 1
        return solutions