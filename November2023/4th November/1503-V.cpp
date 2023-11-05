/*

Today's problem is a brain teaser.

In the problem, we see that there are 2 arrays where 1 array contains
position of those who goes to left and 1 array contains position of
those who goes to right.

In the problem, it is written that when 2 ants meet they change their direction in no time.
Trick to this is that if we consider the ants do not change their direction
after meeting, will it change our solution or not. Answer to it is no as
question says that changing direction takes no time.

Hence, we will directly calculate maximum time of all ants to reach the end. 

*/

class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans=0;
        for(auto x: left){
            ans=max(ans,x);
        }
        for(auto x: right){
            ans=max(ans,n-x);
        }
        return ans;
    }
};