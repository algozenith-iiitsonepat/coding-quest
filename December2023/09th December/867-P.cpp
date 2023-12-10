#include <vector>

class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix)
    {
        // Get the dimensions of the original matrix
        int rows = matrix.size();
        int cols = matrix[0].size();

        // Initialize the transposed matrix with zeros
        vector<vector<int>> ans(cols, vector<int>(rows, 0));

        // Transpose the matrix
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                ans[j][i] = matrix[i][j];
            }
        }

        return ans;
    }
};
