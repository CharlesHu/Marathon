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
    int depth(TreeNode *p) {
        if (p == NULL) return 0;
        return max(depth(p->left), depth(p->right))+1;
    }
    
    bool isBalanced(TreeNode *root) {
        if (root == NULL) return true;
        int diff = depth(root->left)-depth(root->right);
        if (abs(diff) > 1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};