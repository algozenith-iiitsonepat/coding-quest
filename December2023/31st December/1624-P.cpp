class Solution
{
public:
    int maxLengthBetweenEqualCharacters(string s)
    {
        int n = s.length();
        int length = -1;

        // if(n<3) {
        //     return length;
        // }

        // for(int i=0; i<n; i++) {
        //     for(int j=i+1; j<n; j++) {
        //         if(s[i] == s[j]) {
        //            length = max(length, j-i-1);
        //         }
        //     }
        // }

        unordered_map<char, int> mpp;

        for (int i = 0; i < n; i++)
        {
            if (mpp.find(s[i]) != mpp.end())
            {
                length = max(length, i - mpp[s[i]] - 1);
            }
            else
            {
                mpp[s[i]] = i;
            }
        }

        return length;
    }
};
