class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int, int> mp;
        for (int i = 0; i< arr.size(); i++) mp[arr[i]]++;
        vector<int> v;
        int cnt = 0;
        for (auto a: mp) v.push_back(a.second);
        sort(v.begin(), v.end());
        for(int i =0;i<v.size();i++){
            if(k > v[i]){
                k-=v[i];
                v[i]=0;
            }else{
                v[i] -= k;
                k =0;
            }
            if(v[i]!=0)cnt++;
        }

        return cnt;
    }
};
