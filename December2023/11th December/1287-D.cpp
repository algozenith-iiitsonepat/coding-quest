class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
            if(mp[arr[i]]>n/4){
                return arr[i];
            }
        }
        return 0;
    }
};