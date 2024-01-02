class Solution(object):
    def makeEqual(self, words):
        n = len(words)
        words = ''.join(words)
        return all(words.count(w) % n == 0 for w in set(words))
        