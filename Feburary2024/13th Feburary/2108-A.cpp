class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i< words.size(); i++) {
            int flag = 1;
            for (int j = 0; j< words[i].size()/2; j++) {
                if (words[i][j]!=words[i][words[i].size()-j-1]) flag = 0;
            }
            if (flag == 1) return words[i];
        }
        return "";
    }
};
