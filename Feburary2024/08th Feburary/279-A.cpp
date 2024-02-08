class Solution {
public:
    int solve(int idx,int n,vector<int>&dp){
        if(n==0)return 0;
        if(n<0)return 1e8;
        if(idx*idx>n)return 1e8;
        if(dp[n]!=-1)return dp[n];
        if(idx*idx <=n)return dp[n]=min(1+solve(idx,n-(idx*idx),dp),solve(idx+1,n,dp));
        
        return dp[n]=0;
    }
    int numSquares(int n) {
        vector<int>dp(n+1,-1);

        return solve(1,n,dp);
    }
};
