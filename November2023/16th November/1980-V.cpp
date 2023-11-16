class Solution {
public:
    string ans;
    void func(vector<string>& v, string& s){
        if(s.size() == v.size()){
            for(auto x: v){
                if(x == s) return;
            }
            ans=s;
            return;
        }
        s.push_back('0');
        func(v,s);
        s.pop_back();
        if(ans.size()) return;
        s.push_back('1');
        func(v,s);
        s.pop_back();
        if(ans.size()) return;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        string s;
        func(nums,s);
        return ans;
    }
};