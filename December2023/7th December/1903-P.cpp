class Solution
{
public:
    string largestOddNumber(string num)
    {
        int size = num.length() - 1;

        while (size >= 0)
        {
            if (num[size] % 2 == 1)
            {
                return num.substr(0, size + 1);
            }
            size--;
        }

        return "";
    }
};