class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size(),ans=0;
        // First we will sort array as we want to add ith smallest element
        // to ith largest element to minimize the maximum sum
        sort(nums.begin(),nums.end());
        for(int i=0; i<n/2; i++){
            ans=max(ans,nums[i]+nums[n-i-1]);
        }
        return ans;
    }
};