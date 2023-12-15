class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,int>mp;
        for(auto it:paths){
            mp[it[1]]++;
            mp[it[0]]++;
        }
        for(auto it:paths){
            if(mp[it[1]]==1){
                return it[1];
            }
            // mp[it[0]]++;
        }
        
        return "null";
    }
};