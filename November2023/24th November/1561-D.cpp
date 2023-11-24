class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.rbegin(),piles.rend());
        int sum=0;
        int cnt=0;
        for(int i=1;i<piles.size();i+=2){
            if(cnt<piles.size()/3){
                sum+=piles[i];
                cnt++;
            }
        }
        return sum;
    }
};