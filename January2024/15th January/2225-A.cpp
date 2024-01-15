class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> win, loss;
        for (int i = 0; i< matches.size(); i++) {
            win[matches[i][0]]++;
            loss[matches[i][1]]++;
        }
        vector<int> winner, losers;
        for (auto it: win) {
            if (loss[it.first] == 0) {
                winner.push_back(it.first);
            }
        }
        for (auto it: loss) {
            if (it.second == 1) {
                losers.push_back(it.first);
            }
        }
        vector<vector<int>> ans;
        ans.push_back(winner);
        ans.push_back(losers);
        return ans;
    }
};