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
    int res = INT_MIN;
    int fun(TreeNode* root){
        if(root==NULL)
            return 0;
        

        int left = fun(root->left);
        int right = fun(root->right);

        if(left<0)
            left = 0;
        if(right<0)
            right = 0;
        

        int sum = left + right + root->val;
        res = max(res,sum);

        return root->val + max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        fun(root);
        return res;
        
    }
};