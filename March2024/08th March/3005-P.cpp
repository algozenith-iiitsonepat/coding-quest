#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        // store in hashtable
        unordered_map<int, int> freq;

        int maxFreq = 0;
        int maxFreqCount = 0;

        // check for max frequency
        for (int i = 0; i < nums.size(); i++)
        {
            int currentFreq = ++freq[nums[i]];

            // update max frequency
            if (currentFreq > maxFreq)
            {
                maxFreq = currentFreq;
                maxFreqCount = 1;
            }

            // update max frequency count
            else if (currentFreq == maxFreq)
            {
                maxFreqCount++;
            }
        }

        // return max frequency element sum
        return maxFreqCount * maxFreq;
    }
};