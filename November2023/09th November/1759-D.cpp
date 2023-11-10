class Solution
{
    /*
    Simply count the frequency of consecutive characters and add them to the answer.
    */
    public:
        int countHomogenous(string s)
        {
            int n = s.size();
            map<char, int> mp;
            int ans = 0;
            int m = 1e9 + 7;
            for (int i = 0; i < n; i++)
            {
                mp[s[i]]++;
                if (mp.size() == 1)
                {
                    ans = (ans % m + mp[s[i]] % m) % m;
                }
                else
                {
                    mp.clear();
                    mp[s[i]]++;
                    ans = (ans % m + mp[s[i]] % m) % m;
                }
            }
            return ans;
        }
};