/*
Think of it as a graph / Linked List . 
Then we can simply do a dfs traversal and find out all the elements in the order. 
Our starting point will the element which is occuring once only(either first or last)
*/
class Solution {
public:
    void rec(int node,   map<int,vector<int>>&mp, map<int,int>&vis,vector<int>&sol){
        vis[node]=1;
        sol.push_back(node);
        for(auto it:mp[node]){
            if(vis[it]==0){
                rec(it,mp,vis,sol);
            }
        }
    }
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        map<int,vector<int>>mp;
         map<int,int>vis;
        for(auto it:adjacentPairs){
            mp[it[0]].push_back(it[1]);
            mp[it[1]].push_back(it[0]);
            vis[it[0]]=0;
            vis[it[1]]=0;
        }
        int ans=-1;
        for(auto it:mp){
            if(it.second.size()==1){
                ans=it.first;
                break;
                
            }
        }
        vis[ans]=1;
       vector<int>sol;
        
         rec(ans,mp,vis,sol);
        return sol;
        
    }
};