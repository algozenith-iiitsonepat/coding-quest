int dp[101][101];
int n;

int solve(int i, int j, vector<vector<int>>& mat)
{
    if(i == n)
        return 0;

    if(dp[i][j] != -100000)
        return dp[i][j];

    int ans = mat[i][j] + solve(i+1, j, mat);

    if(j-1>=0)
        ans = min(ans, mat[i][j] + solve(i+1, j-1, mat) );

    if(j+1!=n)
        ans = min(ans, mat[i][j] + solve(i+1, j+1, mat) );
    
    return dp[i][j] = ans;
}

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        
        n = mat.size();
        int ans = 1e9;
        
        for(int i=0; i<101; ++i)
            for(int j=0; j<101; ++j)
                dp[i][j] = -100000;

        for(int i=0; i<mat.size(); ++i)
            ans = min(ans, solve(0, i, mat));
        
        return ans;
    }
};