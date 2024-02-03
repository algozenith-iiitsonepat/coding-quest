class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        int w = k+1;
        int dp[k+1];
        memset(dp,0,sizeof(dp));

        for (int i = n-1; i >= 0; i--) {
            int tmp = 0;
            int e = min(n,i+k);

            for (int j = i; j< e; j++) {
                tmp = max(tmp,arr[j]);
                dp[i%w] = max(dp[i%w],dp[(j+1)%w]+tmp*(j-i+1));
            }
        }
        return dp[0];
    }
};
