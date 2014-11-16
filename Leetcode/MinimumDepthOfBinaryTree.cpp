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
    void minDepth(TreeNode *p, int dep, int &m) {
        if (p == NULL) {
            m = 0;
            return ;
        }
        if (!p->left && !p->right) {
            m = min(m, dep);
        }
        if (p->left) minDepth(p->left, dep+1, m);
        if (p->right) minDepth(p->right, dep+1, m);
    }
    
    int minDepth(TreeNode *root) {
        int ans = INT_MAX;
        minDepth(root, 1, ans);
        return ans;
    }
};