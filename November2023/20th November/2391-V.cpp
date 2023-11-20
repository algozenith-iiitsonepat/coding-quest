class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        unordered_map<char,int> m;
        m['M']=0;
        m['P']=1;
        m['G']=2;
        vector<int> v1(3,0),v2(3,0);
        int i=0,s=0;
        for(auto x: garbage){
            for(auto y: x){
                v1[m[y]]++;
                v2[m[y]]=s;
            }
            if(i == travel.size()) break;
            s+=travel[i];
            i++;
        }
        return v1[0]+v1[1]+v1[2]+v2[0]+v2[1]+v2[2];
    }
};