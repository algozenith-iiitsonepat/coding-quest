class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int sum=money-(prices[0]+prices[1]);
        return (sum>=0)?sum:money;
    }
};