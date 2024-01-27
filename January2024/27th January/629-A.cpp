class Solution {
    int M = 1000000007;
public:
    int kInversePairs(int n, int k) {
        int dp[1001][1001] = {1};
        for (int i = 1; i<= n; i++) {
            for (int j = 0; j<= k; j++) {
                for (int itr = 0; itr<= min(j,i-1); itr++) {
                    if (j - itr >= 0) {
                        dp[i][j] = (dp[i][j]+dp[i-1][j-itr])%M;
                    }
                }
            }
        }
        return dp[n][k];
    }
};
