class Solution:
    def numberOfArithmeticSlices(self, nums: List[int]) -> int:
        n = len(nums)
        c = 0
        dp = [defaultdict(int) for _ in range(n)]

        for i in range(1,n):
            for j in range(i):
                d = nums[i]-nums[j]
                dp[i][d] += 1
                if d in dp[j]:
                    dp[i][d] += dp[j][d]
                    c += dp[j][d]
        return c