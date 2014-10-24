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
    void sumNumbers(TreeNode *root, int t, int &sum) {
        if (root == NULL) return ;
        if (root->left==NULL && root->right==NULL) sum += t*10+root->val;
        sumNumbers(root->left, t*10+root->val, sum);
        sumNumbers(root->right, t*10+root->val, sum);
    }
    
    int sumNumbers(TreeNode *root) {
        int ans = 0;
        sumNumbers(root, 0, ans);
        return ans;
    }
};