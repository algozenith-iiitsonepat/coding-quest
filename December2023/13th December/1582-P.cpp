class Solution
{
public:
    int numSpecial(vector<vector<int>> &mat)
    {
        int m = mat.size();
        int n = mat[0].size();
        int ans = 0;

        vector<int> rowOnes(m, 0);
        vector<int> colOnes(n, 0);

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                rowOnes[i] += mat[i][j];
                colOnes[j] += mat[i][j];
            }
        }

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if ((rowOnes[i] == 1) && (colOnes[j] == 1) && (mat[i][j] == 1))
                {
                    ans++;
                }
            }
        }

        return ans;
    }
};