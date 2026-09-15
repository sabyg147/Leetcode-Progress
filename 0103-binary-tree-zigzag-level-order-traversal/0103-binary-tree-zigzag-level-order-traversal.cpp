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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (root==NULL)
            return {};

        bool lefttoright = true;
        

        queue <TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int lvl = q.size();
            vector<int> tmp(lvl);
            int first = 0;
            int last = lvl-1;

            while(lvl--){
                TreeNode* t = q.front();
                q.pop();
                
                if(lefttoright==1){
                    tmp[first]=t->val;;
                    first++;
                }

                else
                {
                    tmp[last]=t->val;
                    last--;
                }

                if(t->left!=NULL)
                    q.push(t->left);
                if(t->right!=NULL)
                    q.push(t->right);
                    
                
            }
            lefttoright = !lefttoright;
            res.push_back(tmp);
        }

        return res;
        
    }
};