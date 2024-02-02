class Solution
{
public:
    vector<vector<int>> divideArray(vector<int> &nums, int k)
    {
        vector<vector<int>> ans;
        int n = nums.size();
        if (n % 3 != 0)
            return vector<vector<int>>();

        int i = 0;
        sort(nums.begin(), nums.end());

        while (i < n)
        {
            vector<int> sa;
            if ((nums[i + 2] - nums[i]) <= k)
            {
                sa.push_back(nums[i]);
                sa.push_back(nums[i + 1]);
                sa.push_back(nums[i + 2]);
                i = i + 3;
            }
            else
            {
                return vector<vector<int>>();
            }

            ans.push_back(sa);
        }
        return ans;
    }
};