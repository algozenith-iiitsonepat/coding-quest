class Solution {
    void traverse(TreeNode* root, int depth, map<int, vector<int>> &mp) {
        if (root) {
            mp[depth].push_back(root->val);
            traverse(root->left, depth+1,mp);
            traverse(root->right, depth+1,mp);
            return;
        }
        return;
    }
public:
    bool isEvenOddTree(TreeNode* root) {
        map<int, vector<int>> mp;
        traverse(root, 0, mp);
        bool ans = true;
        for (auto i: mp) {
            cout<<i.first<<" ";
            for (int j = 0; j< i.second.size(); j++) {
                cout<<i.second[j]<<" ";
            }
            cout<<endl;

            if (i.first%2 == 0) {
                int tmp = i.second[0];
                if (tmp%2==0) return false;
                for (int j = 1; j< i.second.size(); j++) {
                    if (i.second[j]<=tmp || i.second[j]%2==0) return false;
                    tmp = i.second[j];
                }
            }
            if (i.first%2 == 1) {
                int tmp = i.second[0];
                if (tmp%2==1) return false;
                for (int j = 1; j< i.second.size(); j++) {
                    if (i.second[j]>=tmp || i.second[j]%2==1) return false;
                    tmp = i.second[j];
                }
            }

        }
        return true;
    }
};
