class Solution {
public:
/* Let's find for each integer from 1 to n whether we have an integer which we can decrease and make it equal to that particular integer. 
We use a multiset for it*/
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        multiset<int>s;
        for(auto it:arr){
            s.insert(it);
        }
        int n=arr.size();
        int ans=0;
        for(int i=1;i<=n;i++){
            auto it=s.lower_bound(i);
            if(it!=s.end()){
                ans=i;
                s.erase(it);
            }else{
              
                break;
            }
        }
        return ans;
    }
    
};