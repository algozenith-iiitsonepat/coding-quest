import math
class Solution():
    def minOperations(self, nums):
        freq = Counter(nums)
        count = 0
        for n in freq.values():
            if n == 1:
                return -1
            count += (n + 2) // 3
        return count