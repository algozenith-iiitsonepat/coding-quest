class Solution
{
public:
    vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
    {
        vector<bool> ans;
        for (int i = 0; i < l.size(); i++)
        {
            if (l[i] == r[i])
            {
                ans.push_back(true);
                continue;
            }
            vector<int> a;
            for (int j = l[i]; j <= r[i]; j++)
            {
                a.push_back(nums[j]);
            }
            sort(a.begin(), a.end());
            int d = a[1] - a[0];
            bool x = true;
            for (int i = 1; i < a.size() - 1; i++)
            {
                if (a[i + 1] - a[i] != d)
                {
                    x = false;
                    break;
                }
            }
            ans.push_back(x);
        }
        return ans;
    }
};