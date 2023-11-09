class Solution {
public:
    const int M=1e9+7;
    int countHomogenous(string s) {
        int ans=0,c=1;
        char x='a'-1;
        for(auto y: s){
            if(x != y){
                c=1;
            }else{
                c++;
            }
            x=y;
            ans=(ans+c)%M;
        }
        return ans;
    }
};