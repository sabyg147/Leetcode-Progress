/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans = NULL;
    void fun(TreeNode* root, TreeNode* p, TreeNode* q){
        //CASE NULL
        if (root==NULL)
            return;
        //CASE 1
        if(root->val==p->val && root->val==q->val){
            ans = root;
            return;
        }

        //CASE 2
        if(root->val < p->val && root->val <q->val)
            fun(root->right,p,q);

        //CASE 3
        else if(root->val >q->val && root->val>p->val)
            fun(root->left,p,q);

        //CASE 3
        else{
            ans = root;
            return ;
        }
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p->val < q->val)
            fun(root,p,q);
        else
            fun(root,q,p);
        return ans;
        
    }
};