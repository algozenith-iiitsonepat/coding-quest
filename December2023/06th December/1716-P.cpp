class Solution
{
public:
    int totalMoney(int n)
    {
        int sum = 0;
        int quo = n / 7;
        int rem = n % 7;

        // 28
        // 28+7
        // 28+7+7
        // 28+7+7+7
        // 28+7+7+7+7

        // LOOPING TO GET T(O) = N

        // for(int i=0; i<quo; i++) {
        //     sum += (i + 4);
        // }
        // sum = sum*7;

        // T(O) = 1
        if (quo != 0)
        {
            sum += (28 * quo + ((quo - 1) * quo * 7) / 2);
        }

        if (rem != 0)
        {
            sum += ((2 * quo + rem + 1) * rem) / 2;
        }

        return sum;
    }
};