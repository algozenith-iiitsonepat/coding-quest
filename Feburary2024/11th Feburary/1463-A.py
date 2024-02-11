class Solution:
    def cherryPickup(self, grid: List[List[int]]) -> int:
        rows, cols = len(grid), len(grid[-1])
        memo = {}
        def dp(r,c1,c2):
            if r == rows or c1<0 or c1 == cols or c2<0 or c2 == cols:
                return 0
            if (r,c1,c2) in memo:
                return memo[(r,c1,c2)]
            x = grid[r][c1]+(grid[r][c2] if c1!=c2 else 0)
            mxm = 0
            for i in range(-1,2):
                for j in range(-1,2):
                    mxm = max(mxm, dp(r+1, c1+i, c2+j))
            result = x + mxm
            memo[(r,c1,c2)] = result
            return result
        return dp(0,0,cols-1)
