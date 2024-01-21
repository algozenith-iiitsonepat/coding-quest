class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int prevFirst = 0;
        int prevSecond = 0;

        for (int i = 0; i< n; i++) {
            int tmp = prevFirst;
            prevFirst = max(prevSecond + nums[i], prevFirst);
            prevSecond = tmp;
        }
        return prevFirst;
    }
};
