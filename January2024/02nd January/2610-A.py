class Solution(object):
    def findMatrix(self, nums):
        freq_arr = {}
        for i in nums:
            if i in freq_arr:
                freq_arr[i] += 1
            else:
                freq_arr[i] = 1
        max_freq = max(freq_arr.values())
        arr = [[] for i in range(max_freq)]
        for i,j in freq_arr.items():
            for k in range(j):
                arr[k].append(i)
        return arr