/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode *root, int t, int sum) {
        if (root == NULL) return false;
        if (root->left == NULL && root->right == NULL && t+root->val == sum) return true;
        return hasPathSum(root->left, t+root->val, sum) || hasPathSum(root->right, t+root->val, sum);
    }
    
    bool hasPathSum(TreeNode *root, int sum) {
        return hasPathSum(root, 0, sum);
    }
};