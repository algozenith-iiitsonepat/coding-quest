class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_map<char,int>mp;
        unordered_map<char,int>mp2;
        for(auto it:s){
            mp[it]++;
        }
        unordered_set<string>st;
        int ans=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]--;
            if(mp[s[i]]==0){
                mp.erase(s[i]);
            }
            for(int j=0;j<26;j++){
                char c=(char)'a'+j;
                
                if(1LL*mp2[c]*mp[c]>0){
                    string temp;
                    temp+=c;
                    temp+=s[i];
                    temp+=c;
                    st.insert(temp);
                }
            }
            mp2[s[i]]++;
        }
        return st.size();
    }
};