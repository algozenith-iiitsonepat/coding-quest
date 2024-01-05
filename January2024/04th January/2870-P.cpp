#include <vector>
#include <algorithm>
#include <unordered_map>

class Solution
{
public:
    int minOperations(std::vector<int> &nums)
    {
        // map to store count of each
        unordered_map<int, int> count;

        // store count of each element
        for (int i = 0; i < nums.size(); i++)
        {
            count[nums[i]]++;
        }

        // 2 same mean 1 op and 3 same mean 1 op else cant do -1
        int ans = 0;

        // iterate over map
        for (auto i : count)
        {
            if (i.second == 1)
            {
                return -1;
            }

            ans += (i.second + 2) / 3;
        }
        return ans;
    }
};
