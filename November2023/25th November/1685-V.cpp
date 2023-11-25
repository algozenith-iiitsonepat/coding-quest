class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size(),s=0,s1=0;
        for(auto x: nums){
            s+=x;
        }
        vector<int> ans;
        for(int i=0; i<n; i++){
            s-=nums[i];
            ans.push_back(s+i*nums[i]-s1-(n-1-i)*nums[i]);
            s1+=nums[i];
        }
        return ans;
    }
};