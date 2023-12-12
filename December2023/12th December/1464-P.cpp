class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        // initialize the largest and 2nd largest number, aim is to find the max and second largest number and return their product
        int largest = 0;
        int secondLargest = 0;

        for (int num : nums)
        {
            if (num > largest)
            {
                // if the number is larger than the largest number, then update the second largest number and largest number
                secondLargest = largest;
                largest = num;
            }
            else
            {
                // if the number is not larger than the largest number, then update the second largest number
                secondLargest = max(num, secondLargest);
            }
        }

        return (largest - 1) * (secondLargest - 1);
    }
};
