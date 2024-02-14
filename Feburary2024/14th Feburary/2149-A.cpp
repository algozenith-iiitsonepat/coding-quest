class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res(nums.size(), 0);
        for (int i = 0, j = 0; i< nums.size(); i++) {
            if (nums[i]>0) {
                res[j] = nums[i];
                j+=2;
            }
        }
        for (int i = 0, j = 1; i< nums.size(); i++) {
            if (nums[i]<0) {
                res[j] = nums[i];
                j+=2;
            }
        }
        return res;
    }
};
