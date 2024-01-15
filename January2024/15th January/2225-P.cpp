class Solution
{
public:
    vector<vector<int>> findWinners(vector<vector<int>> &matches)
    {
        unordered_map<int, int> lm;
        vector<int> lo;
        vector<int> nl;

        for (int i = 0; i < matches.size(); i++)
        {
            lm[matches[i][1]]++;
        }

        for (int i = 0; i < matches.size(); i++)
        {
            if (lm.find(matches[i][0]) == lm.end())
            {
                nl.push_back(matches[i][0]);
                lm[matches[i][0]] = 999;
            }

            if (lm[matches[i][1]] == 1)
            {
                lo.push_back(matches[i][1]);
            }
        }

        sort(nl.begin(), nl.end());
        sort(lo.begin(), lo.end());

        return {nl, lo};
    }
};