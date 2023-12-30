#include <vector>

class Solution
{
public:
    bool makeEqual(vector<string> &words)
    {
        sort(words.begin(), words.end());

        // calculate size of vector
        int n = words.size();

        // initialize an array of 26 size to store count of each alphabets
        int count[26] = {0};

        // loop through words
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < words[i].length(); j++)
            {
                char c = words[i][j];

                // save in array of alphabets
                count[c - 'a']++;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            if (count[i] % n != 0)
            {
                return false;
            }
        }

        return true;
    }
};