class Solution {
public:
    int minCost(string c, vector<int>& a) {
        int tsum=0;
        int tmax=0;
        int i=0;
        int ans=0;
        int n=a.size();
        while(i<n){
            tsum+=a[i];
            tmax=max(tmax,a[i]);
            i++;
            while(i<n&&c[i]==c[i-1]){
                tsum+=a[i];
                tmax=max(tmax,a[i]);
                i++;
            }
            ans+=tsum-tmax;
            tsum=0;
            tmax=0;
            
        }
        return ans;
    }
     
};