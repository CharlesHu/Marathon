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
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        vector<vector<int> > ans;
        vector<int> vec;
        queue<TreeNode *> qu;
        if (root) qu.push(root);
        while (!qu.empty()) {
            int len = qu.size();
            vec.clear();
            for (int i = 0; i < len; ++i) {
                root = qu.front();
                qu.pop();
                vec.push_back(root->val);
                if (root->left) qu.push(root->left);
                if (root->right) qu.push(root->right);
            }
            ans.insert(ans.begin(), vec);
        }
        return ans;
    }
};