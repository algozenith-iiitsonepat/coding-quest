class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> mpp;
        set<int> s;

        for (int i = 0; i < arr.size(); i++)
        {
            mpp[arr[i]]++;
        }

        for (int i = 0; i < arr.size(); i++)
        {
            s.insert(mpp[arr[i]]);
        }

        if (s.size() == mpp.size())
        {
            return true;
        }

        return false;
    }
};