class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char,int>mp;
        for(auto it:chars){
            mp[it]++;
            
        }
        int ans=0;
        for(auto it:words){
            map<char,int>mp2;
            for(auto itr:it){
                mp2[itr]++;
            }
            int fl=0;
            for(auto i:mp2){
                if(i.second>mp[i.first]){
                    fl=1;
                    break;
                }
            }
            if(!fl){
                ans+=it.size();
            }
        }
        return ans;
    }
};