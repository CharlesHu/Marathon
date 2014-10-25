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
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
        vector<vector<int> > ans;
        vector<int> vec;
        queue<TreeNode *> qu;
        if (root) qu.push(root);
        for (int ii = 0; !qu.empty(); ++ii) {
            int len = qu.size();
            vec.clear();
            for (int i = 0; i < len; ++i) {
                root = qu.front();
                qu.pop();
                if (root->left) qu.push(root->left);
                if (root->right) qu.push(root->right);
                if (ii%2 == 0) {
                    vec.push_back(root->val);
                } else {
                    vec.insert(vec.begin(), root->val);
                }
            }
            ans.push_back(vec);
        }
        return ans;
    }
};