class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<vector<int>> v;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums[i].size(); j++){
                v.push_back((vector<int>){i+j,j,nums[i][j]});
            }
        }
        sort(v.begin(),v.end());
        vector<int> ans;
        for(auto x: v){
            ans.push_back(x[2]);
        }
        return ans;
    }
};