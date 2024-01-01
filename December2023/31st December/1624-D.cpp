class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        map<char,vector<int>>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]].push_back(i);
        }
        int ans=-1;
        for(auto it:mp){
            // for(int j=0;j<it.second.size()-1;j++)
            {
                ans=max(ans,it.second.back()-it.second[0]-1);
               
            }
            
        }
        return ans;
    }
};