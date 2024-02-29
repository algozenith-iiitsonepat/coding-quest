/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        if(!root){
            return 1;
        }
        if(root->val%2==0){
            return 0;
        }
        int cnt=0;
        while(q.size()){
            int d=q.size();
            vector<int>v;
            while(d--){
               
                auto it=q.front();
                q.pop();
              

                if(it->left){
                    v.push_back(it->left->val);
                      q.push(it->left);
                  
                }
                if(it->right){
                      v.push_back(it->right->val);
                     q.push(it->right);
                }
                
                
            }
            
            if(cnt%2){
               
                 if(v.size()==1){
                    if(v[0]%2==1){
                        cnt++;
                        continue;
                    }else{
                        return 0;;
                    }
                }
             
                for(int i=0;i<(int)v.size()-1;i++)
                {
                 
                    if(v[i+1]%2==1&&v[i]%2==1&&v[i+1]>v[i]){
                        continue;
                    }else{
                        return 0;
                    }
                }
            }else{
              
                 if(v.size()==1){
                    if(v[0]%2==0){
                         cnt++;
                        continue;
                    }else{
                        return 0;;
                    }
                }
               
                for(int i=0;i<(int)v.size()-1;i++){
                    
                    if(v[i+1]%2==0&&v[i]%2==0&&v[i+1]<v[i]){
                        continue;
                    }else{
                        return 0;
                    }
                }
            }
            cnt++;
            
            
            
            
        }
        return 1;
    }
};