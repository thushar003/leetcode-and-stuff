class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        result = defaultdict(list)

        for s in strs:
            count = [0] * 26
            for c in s:
                #ASCII value of current char - ASCII of the 'a'
                count[ord(c) - ord("a")] += 1
            result[tuple(count)].append(s)
        return result.values()