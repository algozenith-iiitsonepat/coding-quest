/*

Today's problem is a simple Binary Search Tree problem.

Approach:
In this problem, I used the inorder traversal of the BST which gives the nodes
of the tree in non-decreasing order.

Eg. in case of [6,2,8,0,4,7,9,null,null,2,6] tree,
the inorder traversal is [0,2,2,4,6,6,7,8,9].

In the code, we will check every element. If the number is repeating, then we
will just increment the count else we will check whether the count is maximum
or not. If the count is greater than the previous maximum count, then we will
clear our ans array and push the number. If count is equal to the previous
maximum count, then we will simply push the number. Else no operation needed.

*/


class Solution {
public:
    int x=-1,c=0,c1=0;
    vector<int> ans;
    void inorder(TreeNode* root){
        if(root){
            inorder(root->left);
            if(root->val == x){
                c++;
            }else{
                if(c>c1){
                    ans.clear();
                    ans.push_back(x);
                    c1=c;
                }else if(c1 == c){
                    ans.push_back(x);
                }
                x=root->val;
                c=1;
            }
            inorder(root->right);
        }
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        if(c>c1){
            ans.clear();
            ans.push_back(x);
        }else if(c==c1){
            ans.push_back(x);
        }
        return ans;
    }
};