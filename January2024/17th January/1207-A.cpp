class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        for (int i = 0; i< arr.size(); i++) {
            mp[arr[i]]++;
        }
        map<int,int> mpp;
        for (auto it: mp) {
            mpp[it.second]++;
        }
        for (auto it: mpp) {
            if (it.second>1) return false;
        }
        return true;
    }
};