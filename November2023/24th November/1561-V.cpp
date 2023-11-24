class Solution
{
public:
    int maxCoins(vector<int> &piles)
    {
        int ans = 0;
        // We will sort the piles and keep every largest two integers for alice
        // and us and every smallest for bob
        sort(piles.begin(), piles.end());
        for (int i = 0, j = piles.size() - 1; i < j; i++, j -= 2)
        {
            ans += piles[j - 1];
        }
        return ans;
    }
};