class Solution {
public:
/*
Change the expression as nums[i] -rev(nums[i])=   nums[j] -rev(nums[j]) 
*/
    int m=1e9+7;
    int countNicePairs(vector<int>& nums) {
        map<int,int>mp;
        int ans=0;
        for(auto it:nums){
            int rev=it;
            int sum=0;
            
            while(rev){
                sum=sum*10+rev%10;
                rev/=10;
            }
         
            ans=(ans%m+(mp[it-sum])%m)%m;
            mp[it-sum]++;
        }
        return ans;
    }
};