class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i=0;i<l.size();i++){
            int left=l[i];
            int right=r[i];
            vector<int>vp;
            for(int j=left;j<=right;j++){
                vp.push_back(nums[j]);
            }
            sort(vp.begin(),vp.end());
            int diff;
            if(vp.size()>=2){
                diff=vp[1]-vp[0];
            }else{
                ans.push_back(1);
                continue;
            }
            int g=0;
            for(int j=0;j<vp.size()-1;j++){
                if(vp[j+1]-vp[j]!=diff){
                    ans.push_back(0);
                    g=1;
                    break;
                }
            }
            if(!g){
                ans.push_back(1);
            }
            
            
        }
        return ans;
    }
};