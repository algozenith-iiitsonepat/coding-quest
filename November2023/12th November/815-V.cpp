class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        unordered_map<int, vector<int>> m;
        for(int i=0; i<routes.size(); i++){
            for(auto x: routes[i]){
                m[x].push_back(i);
            }
        }
        queue<pair<int,int>> q;
        q.push({source,0});
        unordered_set<int> vis;
        vis.insert(source);
        while(!q.empty()){
            int x=q.front().first,y=q.front().second;
            q.pop();
            if(x == target) return y;
            for(auto i: m[x]){
                for(auto j: routes[i]){
                    if(vis.find(j) == vis.end()){
                        vis.insert(j);
                        q.push({j,y+1});
                    }
                }
                routes[i].clear();
            }
        }
        return -1;
    }
};