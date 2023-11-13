class Solution {
public:
    string sortVowels(string s) {
        vector<int>v;
        
        for(auto it:s)
        {
            if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u'||it=='A'||it=='E'||it=='I'||it=='O'||it=='U')
            {
                v.push_back(it);
            }
        }
        sort(v.begin(),v.end());
         string ans;
        int j=0;
        for(auto it:s)
        {
            if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u'||it=='A'||it=='E'||it=='I'||it=='O'||it=='U')
            {
                char d=(char)v[j];
                j++;
                ans.push_back(d);
            }
            else{
                ans+=it;
            }
        }
        return ans;
    }
};