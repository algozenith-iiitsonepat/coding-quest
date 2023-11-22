class Solution {
public:
     static bool comp(vector<int>&a,vector<int>&b){
        if(a[0]>b[0]){
            return 0;
        }
        else if(a[0]==b[0]){
            return a[1]>b[1];
        }
       return 1;
    }
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int>ans;
        vector<vector<int>>temp;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                temp.push_back({i+j,i,nums[i][j]});
            }
        }
        sort(temp.begin(),temp.end(),comp);
        for(int i=0;i<temp.size();i++){
            ans.push_back(temp[i][2]);
        }
        return ans;
        
    }
};