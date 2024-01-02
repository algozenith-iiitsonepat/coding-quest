class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char,int>mp;
        for(auto it:words){
            for(auto i:it){
                mp[i]++;
            }
        }
        int n=words.size();
        for(auto it:mp){
            if(it.second%n!=0){
                return 0;
            }
        }
        return 1;
    }
};