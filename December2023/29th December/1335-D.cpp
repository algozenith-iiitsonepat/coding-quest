class Solution {
public:
    int dp[301][11];
    int rec(int i,vector<int>&jd,int d,int n){
        if(d==1){
            int maxd=0;
            for(int idx=i;idx<n;idx++){
                maxd=max(maxd,jd[idx]);
            }
            return maxd;
        }
        if(i>=n&&d!=1){
            return 1e7;
        }
        if(dp[i][d]!=-1){
            return dp[i][d];
        }
        int maxijob=0;
        int ans=INT_MAX;
        for(int j=i;j<n;j++){
            maxijob=max(maxijob,jd[j]);
            int tans=maxijob+rec(j+1,jd,d-1,n);
            ans=min(ans,tans);
        }
        return dp[i][d]= ans;
    }
    int minDifficulty(vector<int>& jd, int d) {
        int n=jd.size();
        if(n<d){
            return -1;
        }
        memset(dp,-1,sizeof(dp));
        return rec(0,jd,d,n);
    }
};