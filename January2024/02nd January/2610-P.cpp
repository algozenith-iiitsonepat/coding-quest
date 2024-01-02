class Solution
{
public:
    vector<vector<int>> findMatrix(vector<int> &nums)
    {
        // make ans map for storing count of each number in the vector
        unordered_map<int, int> mpp;

        // make cnt for storing the maximum count of a number
        int cnt = 0;

        for (auto a : nums)
        {
            // increase the count of each number in the map
            mpp[a]++;

            // update the cnt for storing the maximum count of a number
            cnt = max(cnt, mpp[a]);
        }

        // make ans vector of vector for storing the answer
        vector<vector<int>> ans(cnt);

        for (auto a : mpp)
        {
            // store the number and its frequency from the map
            int num = a.first;
            int freq = a.second;

            // if the number have duplicates, add them to the vector
            for (int i = 0; i < freq; i++)
            {
                ans[i].push_back(num);
            }
        }
        return ans;
    }
};