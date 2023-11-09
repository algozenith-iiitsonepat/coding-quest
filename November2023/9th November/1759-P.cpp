class Solution
{
public:
    int countHomogenous(string s)
    {
        const int MOD = 1e9 + 7; // CONSTANT FOR MODULO OPERATION
        long long ans = 0;       // VARIABLE TO STORE THE RESULT
        int i = 0;               // POINTER i FOR START OF SUBSTRING
        int j = 0;               // POINTER j FOR END OF SUBSTRING

        while (j < s.size())
        {
            if (s[i] == s[j])
            {
                j++; // INCREMENT j UNTIL THE CHARACTER IS THE SAME
            }
            else
            {
                int length = j - i;                                               // CALCULATE THE LENGTH OF THE SUBSTRING
                ans = (ans + ((long long)(length + 1) * length / 2) % MOD) % MOD; // UPDATE THE ANSWER USING MODULO ARITHMETIC
                i = j;                                                            // MOVE i TO THE NEW START OF SUBSTRING
            }
        }

        int length = j - i;                                               // CALCULATE THE LENGTH OF THE FINAL SUBSTRING
        ans = (ans + ((long long)(length + 1) * length / 2) % MOD) % MOD; // UPDATE THE ANSWER FOR THE FINAL SUBSTRING

        return ans; // RETURN THE FINAL RESULT
    }
};
