class Solution {
public:
    int solve(int a, int b, string opr) {
        if(opr == "+") return a + b;
        else if(opr == "-") return a - b;
        else if(opr == "*") return (int)a*b;
        return a/b;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> Stack;
        int n = tokens.size();
        for (int i = 0; i< n; i++) {
            if (tokens[i].size() == 1 && tokens[i][0]< 48) {
                int t2 = Stack.top();
                Stack.pop();
                int t1 = Stack.top();
                Stack.pop();
                string opr = tokens[i];
                int ans = solve(t1,t2,opr);
                Stack.push(ans);
            } else {
                Stack.push(stoi(tokens[i]));
            }
        }
        return Stack.top();
    }
};
