class Solution
{
public:
    int findSpecialInteger(vector<int> &arr)
    {
        float countFor25 = 0;
        int length = arr.size();
        int currCount = 1;
        int curr = arr[0];

        countFor25 = (25 * length) / 100;

        for (int i = 1; i < length; i++)
        {
            if (curr == arr[i])
            {
                currCount++;
            }
            else
            {
                currCount = 1;
            }

            if (currCount > countFor25)
            {
                return arr[i];
            }

            curr = arr[i];
        }

        return curr;
    }
};