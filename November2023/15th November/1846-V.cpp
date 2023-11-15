class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int ans=0;
        sort(arr.begin(),arr.end());
        for(int i=0; i<arr.size(); i++){
            ans=min(ans+1,arr[i]);
        }
        return ans;
    }
};