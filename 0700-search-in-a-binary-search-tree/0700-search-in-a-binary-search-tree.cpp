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
    TreeNode* ans = NULL;
    void fun(TreeNode* root, int x){
        
        if(root==NULL)
            return;
        if (root->val==x){
            ans = root;
            return;
        }

        if(root->val <= x)
            fun(root->right,x);
        else
            fun(root->left,x);
    }
    TreeNode* searchBST(TreeNode* root, int val) { 
        fun(root,val);
        return ans;      
        
    }
};