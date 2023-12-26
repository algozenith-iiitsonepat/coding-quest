class Solution {
public:
    int maxScore(string s) {
        int z=0;
        int ans=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0'){
                z++;
            }
            int o=0;
            for(int j=i+1;j<s.size();j++){
                if(s[j]=='1'){
                    o++;
                }
            }
            if(z==s.size()){
                ans=max(ans,(int)s.size()-1);
            }else{
                
                  ans=max(ans,o+z);
            }
          
        }
        return ans;
    }
};