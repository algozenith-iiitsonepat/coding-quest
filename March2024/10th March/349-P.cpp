
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    /**
     * Finds the intersection of two integer vectors.
     *
     * Converts both input vectors to unordered sets for fast lookup.
     * Iterates through one set to check for presence in the other set.
     * Returns a vector containing the intersection elements.
     */
    vector<int> intersection(const vector<int> &nums1, const vector<int> &nums2)
    {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        vector<int> intersectionResult;

        for (int num : set2)
        {
            if (set1.count(num))
            {
                intersectionResult.push_back(num);
            }
        }

        return intersectionResult;
    }
};