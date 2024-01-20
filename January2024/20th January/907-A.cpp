class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size(),ans=0,mod=1e9+7;
       int nxt[n],pre[n];
        for(int i=n-1;i>=0;i--){
            int j=i+1;
            while(j<n&&arr[j]>=arr[i])j=nxt[j];
            nxt[i]=j;
        }
        for(int i=0;i<n;i++){
            int j=i-1;
            while(j>=0&&arr[j]>arr[i])j=pre[j];
            pre[i]=j;
            ans=(ans+1ll*arr[i]*(i-pre[i])*(nxt[i]-i))%mod;
        }
        return ans;
    }
};
