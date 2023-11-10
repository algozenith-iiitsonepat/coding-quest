/*

Today's problem is a binary tree problem.

In this problem, we will calculate length and sum of nodes of every subtree
and check whether the average of this sub-tree is equal to the node value
of the root of the subtree. If it is equal then we will return an increment
to the answer.

In my solution, I used a pair<int,pair<int,int>> structure where first
element will have the answer stored. First element of inner pair will
contain sum of all nodes of subtree and second element will contain the
number of nodes in the subtree. Now we can easily use our brute force
technique to calculate the answer.

For tree traversal, I used dfs.

*/

class Solution {
public:
    pair<int,pair<int,int>> dfs(TreeNode* vertex){
        int a=vertex->val,b=1,c=0;
        if(vertex->left){
            pair<int,pair<int,int>> p=dfs(vertex->left);
            c+=p.first;
            a+=p.second.first;
            b+=p.second.second;
        }
        if(vertex->right){
            pair<int,pair<int,int>> p=dfs(vertex->right);
            c+=p.first;
            a+=p.second.first;
            b+=p.second.second;
        }
        if(vertex->val == (a/b)) c++;
        return make_pair(c,make_pair(a,b));
    }
    int averageOfSubtree(TreeNode* root) {
        return dfs(root).first;
    }
};