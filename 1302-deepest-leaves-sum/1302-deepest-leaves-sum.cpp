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
    int height(TreeNode* root){
        if(root==NULL) return 0;
        return max(1+height(root->left),1+height(root->right));
    }
    int helper(TreeNode*root,int h,int i){
        if(root==NULL){
            return 0;
        }
        if(i==h){
            return root->val;
        }
        return helper(root->left,h,i+1)+helper(root->right,h,i+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        int h=height(root);
        return helper(root,h,1);
        
    }
};