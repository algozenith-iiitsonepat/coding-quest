class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        map<int,vector<int>> m;
        for(auto x: adjacentPairs){
            m[x[0]].push_back(x[1]);
            m[x[1]].push_back(x[0]);
        }
        int y=-1,z;
        for(auto x: m){
            if(x.second.size() == 1) y=x.first;
        }
        vector<int> ans(1,y);
        z=m[y][0];
        ans.push_back(z);
        while(true){
            if(m[z].size() == 1){
                break;
            }
            if(m[z][0] == y){
                y=z;
                z=m[z][1];
            }else{
                y=z;
                z=m[z][0];
            }
            ans.push_back(z);
        }
        return ans;
    }
};