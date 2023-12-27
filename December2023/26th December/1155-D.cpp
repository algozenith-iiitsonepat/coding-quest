class Solution {
public:
    int m=1e9+7;
    int dp[40][1002];
  
    int rec(int n,int k,int target){
        int sum=0;
        if(n==0){
            return target==0;;
        }
        if(target<0){
            return 0;
        }
       
        if(dp[n][target]!=-1){
            return dp[n][target];
        }
        for(int i=1;i<=k;i++){
            sum=(sum%m+rec(n-1,k,target-i)%m)%m;
        }
        return dp[n][target]=sum;
    }
    int numRollsToTarget(int n, int k, int target) {
          memset(dp,-1,sizeof(dp));
        return rec(n,k,target);
    }
};