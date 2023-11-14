class Solution {
public:
    int countPalindromicSubsequence(string s) {
        map<char,pair<int,int>> m;
        for(int i=0; i<s.size(); i++){
            if(m.find(s[i]) == m.end()){
                m[s[i]].first=i;
                m[s[i]].second=i;
                continue;
            }
            m[s[i]].first=max(m[s[i]].first,i);
            m[s[i]].second=min(m[s[i]].second,i);
        }
        int ans=0;
        for(auto x: m){
            set<int> y;
            for(int i=x.second.second+1; i<x.second.first; i++){
                y.insert(s[i]);
            }
            ans+=y.size();
        }
        return ans;
    }
};