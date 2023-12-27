class Solution:
    def minOperations(self, s: str) -> int:
        n = len(s)
        count = 0

        # alternating binary string have two possibilities 101010... or 010101..., now suppose for 10100 we have to check for 1 at even position and 0 at odd position and change them to make alternating string like 0101010... and to to make string like 1010101... we have to check for 0 at even position and 1 at odd position and change them or just subtract count from n

        if n == 1:
            return 0

        for i in range(n):
            if i % 2 == 0 and s[i] == '1':
                count += 1
            if i % 2 == 1 and s[i] == '0':
                count += 1

        return min(count, n - count)  