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
    void dfs(vector<TreeNode *> &v, TreeNode *p) {
        if (p == NULL) return ;
        v.push_back(p);
        if (p->left) dfs(v, p->left);
        if (p->right) dfs(v, p->right);
    }
    
    void flatten(TreeNode *root) {
        vector<TreeNode *> v;
        dfs(v, root);
        for (int i = 0; i < v.size(); ++i) {
            v[i]->left = NULL;
            if (i+1 < v.size()) v[i]->right = v[i+1];
        }
    }
};