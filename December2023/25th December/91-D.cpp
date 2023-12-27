class Solution {
public:
     map<string,char>m;    
     int rec(int idx,int n,string s, vector<int>&dp)
     {
         if(idx>=n)
         {
             return 1;
         }
         if(idx==n-1)
         {
             string ge;
             ge+=s[idx];
             if(m.find(ge)!=m.end())
             {
                 return 1;
             }
             return 0;
         }
         
         if(dp[idx]!=-1)return dp[idx];
         int ways=0;
         string tem;
         tem+=s[idx];
         if(m.find(tem)!=m.end())
         {
      
              ways+=rec(idx+1,n,s,dp);
         }
         tem+=s[idx+1];
         if(m.find(tem)!=m.end())
         {
     
              ways+=rec(idx+2,n,s,dp);
         }
         return dp[idx]=ways;
         
        
     }
    int numDecodings(string s) {
        char c='a'-1;
      for(int i=1;i<=26;i++)
        {
          char d=c+i;
            string g=to_string(i);
            m[g]=d;
        }
     
        int n=s.size();
             vector<int>dp(n+1,-1);
        return rec(0,n,s,dp);
    }
};