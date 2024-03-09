#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    /**
     * Finds the first common element in two sorted integer vectors.
     *
     * Iterates through the two vectors in parallel, comparing elements at each index.
     * Returns the first common element found, or -1 if no common element exists.
     *
     * Time Complexity: O(N+M) where N and M are the sizes of the two vectors.
     * Space Complexity: O(1).
     */
    int getCommon(vector<int> &nums1, vector<int> &nums2)
    {
        const int NOT_FOUND = -1;
        int cnt1 = 0;
        int cnt2 = 0;
        int ans = NOT_FOUND;
        int size1 = nums1.size();
        int size2 = nums2.size();

        while (cnt1 < size1 && cnt2 < size2)
        {
            if (nums1[cnt1] < nums2[cnt2])
            {
                cnt1++;
            }
            else if (nums1[cnt1] > nums2[cnt2])
            {
                cnt2++;
            }
            else
            {
                ans = nums1[cnt1];
                break;
            }
        }
        return ans;
    }
}