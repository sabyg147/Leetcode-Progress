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
    vector<vector<int>> res;
    void fun(TreeNode* root, int targetSum,vector<int>& tmp,int sum){
        if(root==NULL)
            return;
        sum = sum + root->val;
        tmp.push_back(root->val);

        if(root->left==NULL && root->right==NULL){
            if(sum==targetSum)
                res.push_back(tmp);
            tmp.pop_back();
            return;
        }
        else{
            fun(root->left,targetSum,tmp,sum);
            fun(root->right,targetSum,tmp,sum);
            tmp.pop_back();
        }

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>tmp;
        fun(root,targetSum,tmp,0);
        
        return res;
        
    }
};