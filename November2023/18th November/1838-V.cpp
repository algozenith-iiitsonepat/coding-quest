class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        // Will use sliding window algo
        // Check whether a particular length of array can be made equal to max element or not
        // If not reduce length from start else increase from right
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long s=0,ans=0,l=0;
        for(int i=0; i<n; i++){
            s+=nums[i];
            l++;
            while(l*nums[i]-s > k){
                s-=nums[i-l+1];
                l--;
            }
            ans=max(ans,l);
        }
        return (int)ans;
    }
};