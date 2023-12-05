class Solution
{
public:
    string largestGoodInteger(string num)
    {
        if (num.size() < 3)
        {
            return "";
        }

        int maxNum = -1;

        for (int i = 0; i < num.size() - 2; i++)
        {
            if ((num[i] == num[i + 1]) && (num[i + 1] == num[i + 2]))
            {
                maxNum = max(maxNum, num[i] - '0');
            }
        }

        string ans = to_string(maxNum) + to_string(maxNum) + to_string(maxNum);

        return maxNum == -1 ? "" : ans;
    }
};