class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> mp1,mp2;
        for (int i = 0; i< s.size(); i++) {
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        int sm = 0;
        for (int i = 0; i< 26; i++) {
            int tmp = mp1[(char)(int('a')+i)]-mp2[(char)(int('a')+i)];
            sm += (tmp>0)?tmp:-tmp;
        }
        return sm/2;
    }
};
