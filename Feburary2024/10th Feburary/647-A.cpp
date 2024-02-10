class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int ans = 0;
        if (n<1) return 0;
        vector<vector<bool>> dp(n,vector<bool>(n,false));
        for (int i = 0; i< n; i++, ans++) dp[i][i] = true;
        for (int i = 0; i< n-1; i++) {
            dp[i][i+1] = (s[i] == s[i+1]);
            ans += (dp[i][i+1]?1:0);
        }
        for (int i = 3; i<= n; i++) {
            for (int j = 0, k = j+i-1; k< n; k++, j++) {
                dp[j][k] = dp[j+1][k-1] && (s[j] == s[k]);
                ans+=(dp[j][k]?1:0);
            }
        }
        return ans;
    }
};
