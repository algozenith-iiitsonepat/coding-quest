class Solution(object):
    def minOperations(self, s):
        r1 = 0
        r2 = 0
        for i in range(len(s)):
            if (i&1 and s[i] == "0") or (i&1 == 0 and s[i] == "1"):
                r1+=1
            if (i&1 and s[i] == "1") or (i&1 == 0 and s[i] == "0"):
                r2+=1
        return min(r1,r2)
