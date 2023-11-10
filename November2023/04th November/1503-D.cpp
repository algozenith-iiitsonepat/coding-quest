class Solution {
public:
/*
The ants changing their direction is same as if they continue moving in the same direction so we just have to calculate how much time it will take for one ant to fall off the plank.
*/
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans=0;
        for(auto it:left){
            ans=max(ans,it);
        }
        for(auto it:right){
            ans=max(ans,n-it);
        }
        return ans;
    }
};