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
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> ans;
        stack<TreeNode *> st;
        while (!st.empty() || root) {
            if (root) {
                ans.insert(ans.begin(), root->val);
                st.push(root);
                root = root->right;
            } else {
                root = st.top();
                st.pop();
                root = root->left;
            }
        }
        return ans;
    }
};