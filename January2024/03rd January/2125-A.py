class Solution(object):
    def numberOfBeams(self, bank):
        """
        :type bank: List[str]
        :rtype: int
        """
        ans, tmp = 0, 0
        for s in bank:
            n = s.count('1')
            if n == 0:
                continue
            ans += tmp * n
            tmp = n
        return ans