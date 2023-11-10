/**
      We return sum of subtree and the count of nodes of the subtree at each recursion call
 */
class Solution {
public:
    int cnt=0;
    vector<int> rec(TreeNode* root){
         if(!root) return {0 , 0};
/* This part of code visits the node for the first time .*/
        
       vector<int>left=rec(root->left);
/*
  This part is after visiting the left node
*/
        vector<int>right=rec(root->right);
       vector<int>left=rec(root->left);
/*
  This part is after visiting the right node
  Now we have all the data about the subtree 
*/
        if(((left[0] +  right[0] +  root->val) / (left[1] + right[1] + 1)) == root->val) {
            cnt++;
        }

        return {left[0] +  right[0] +  root->val , left[1] + right[1] + 1};
    }
    int averageOfSubtree(TreeNode* root) {
      
       rec(root);
        return cnt;
    }
};