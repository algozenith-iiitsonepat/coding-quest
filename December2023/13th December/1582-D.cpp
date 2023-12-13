class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans=0;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int flag=0;
                int flag2=0;
                for(int k=0;k<m;k++){
                    if(mat[i][k]==1&&k!=j){
                        flag=1;
                        break;
                    }
                }
                 for(int k=0;k<n;k++){
                    if(mat[k][j]==1&&k!=i){
                        flag2=1;
                        break;
                    }
                }
                if(flag==0&&flag2==0&&mat[i][j]==1){
                    ans++;
                }
                
            }
        }
        return ans;
    }
};
