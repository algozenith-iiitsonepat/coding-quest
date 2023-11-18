#define ll long long 
class Solution {
public:
    vector<long long int>presum;
    long long binsearch(int i,vector<int>&nums,int k,vector<long long int>&presum){
        int l=0;
        int r=i-1;
        // 0 1 2 3 4 5 6 
           long long int cnt=0;
        while(l<=r){
          long long  int mid=(l+r)/2;
           long long int len=i-mid;
           long long int val=len*nums[i];
           long long int currsum=presum[i-1]-((mid>=1)?presum[mid-1]:0);
           long long int diff=val-currsum;
            if(diff>k){
                l=mid+1;
            }else{
                r=mid-1;
                cnt=max(cnt,len);
                
            }
        }
        return cnt+1;
    }
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
      long long  int ans=0;
        presum.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            presum.push_back(nums[i]+presum.back());
        }
        for(int i=0;i<nums.size();i++){
            ans=max(ans,binsearch(i,nums,k,presum));
        }
        return ans;
    }
};