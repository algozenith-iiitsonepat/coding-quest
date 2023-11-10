class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n=dist.size();
        vector<double> t(n);
        for(int i=0; i<n; i++){
            t[i]=(dist[i]+0.0)/speed[i];
        }
        sort(t.begin(), t.end());
        int ans=1;
        for(int i=1,j=1; j<n; j++,i++){
            if(t[j] > i) ans++;
            else break;
        }
        return ans;
    }
};