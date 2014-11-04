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
    vector<vector<int> > levelOrder(TreeNode *root) {
        vector<vector<int> > ans;
        vector<int> v;
        queue<TreeNode *> qu;
        if (root) qu.push(root);
        while (!qu.empty()) {
            int len = qu.size();
            v.clear();
            for (int i = 0; i < len; ++i) {
                root = qu.front();
                qu.pop();
                v.push_back(root->val);
                if (root->left) qu.push(root->left);
                if (root->right) qu.push(root->right);
            }
            ans.push_back(v);
        }
        return ans;
    }
};