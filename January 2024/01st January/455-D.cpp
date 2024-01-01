class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        multiset<int>st(s.begin(),s.end());
        for(int i=0;i<g.size();i++){
            auto it=st.lower_bound(g[i]);
            if(it==st.end()){
                return i;
            }
            st.erase(it);
        }
        return g.size();
    }
};