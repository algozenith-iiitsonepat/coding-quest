class Solution
{
    public:
        vector<string> buildArray(vector<int> &target, int n)
        {
            int j = 0;
            vector<string> ans;
            for (int i = 1; i <= n; i++)
            {
                if (j < target.size() && i == target[j])
                {
                    ans.push_back("Push");
                    j++;
                 /* If the element from the input stream is equal to the element of target array then we push it to the stack      */
                }
                else
                {   
                    /* If the element from the input stream is not equal to the element of target array then we first push it to the stack and then remove it      */
                    ans.push_back("Push");
                    ans.push_back("Pop");
                }
                if (j == target.size())
                {
                    /* If we reach the end of the target array then we simply break out of the loop */
                    break;
                }
            }
            return ans;
        }
};