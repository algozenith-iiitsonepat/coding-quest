class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        n = len(s)
        s1 = s[:n//2]
        s2 = s[n//2:]
        c1 = 0
        c2 = 0
        for i in s1:
            if i.lower() in "aeiou":
                c1+=1
        for i in s2:
            if i.lower() in "aeiou":
                c2+=1
        if (c1==c2):
            return True
        return False