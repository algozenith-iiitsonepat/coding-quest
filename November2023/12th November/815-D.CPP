class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
         if(source == target) return 0;
        int n = routes.size();
        vector<bool> vis(n);
        q<int> q;
        unordered_map<int, vector<int>> Mp;
        for(int i = 0; i < n; i++) {
            for(int r: routes[i]) {
                if(r == source) {
                    q.push(i);
                    vis[i] = true;
                }
                mp[r].push_back(i);
            }
        }
        int ans = 1;
        while(!q.empty()) {
            int sz = q.size();
            for(int i = 0; i < sz; i++) {
                int curr = q.front();
                q.pop();
                for(int u: routes[curr]) {
                    if(u == target) return ans;
                    for(int v: mp[u]) {
                        if(!vis[v]) {
                            vis[v] = true;
                            q.push(v);
                        }
                    }
                }
            }
            ans++;
        }
        return -1;
    }
};