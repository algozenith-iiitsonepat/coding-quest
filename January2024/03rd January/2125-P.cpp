class Solution
{
private:
    int numOfOnes(string s, int len)
    {
        int count = 0;

        for (int i = 0; i < len; i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
        }

        return count;
    }

public:
    int numberOfBeams(vector<string> &bank)
    {
        int n = bank.size();
        int ans = 0;

        if (n < 2)
        {
            return ans;
        }

        int row = bank[0].length();

        int curr = numOfOnes(bank[0], bank[0].length());
        int temp = 0;

        for (int i = 1; i < n; i++)
        {
            int one = numOfOnes(bank[i], row);
            temp = one;

            if (temp != 0)
            {
                ans += temp * curr;
                curr = temp;
            }
        }

        return ans;
    }
};