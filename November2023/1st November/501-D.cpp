/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
public:
    int val = 0, cnt = 0, maxcnt = 0;
    ;
    vector<int> ans;
    int prev = -1;
    void rec(TreeNode *root)
    {

        if (!root)
        {
            return;
        }

        rec(root->left);

        if (root->val == prev)
        {
            cnt++;
        }
        else
        {
            cnt = 1;
        }

        if (cnt > maxcnt)
        {
            ans = {root->val};
            maxcnt = cnt;
        }
        else if (cnt == maxcnt)
        {
            ans.push_back(root->val);
        }

        prev = root->val;
        rec(root->right);
    }
    vector<int> findMode(TreeNode *root)
    {

        rec(root);

        return ans;
    }
};
