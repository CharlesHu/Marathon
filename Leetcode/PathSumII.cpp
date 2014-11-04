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
    void pathSum(TreeNode *root, vector<vector<int> > &ans, vector<int> v, int cur, int sum) {
        if (root == NULL) return ;
        if (root->left == NULL && root->right == NULL) {
            if (cur+root->val == sum) {
                v.push_back(root->val);
                ans.push_back(v);
            }
            return ;
        }
        v.push_back(root->val);
        if (root->left) pathSum(root->left, ans, v, cur+root->val, sum);
        if (root->right) pathSum(root->right, ans, v, cur+root->val, sum);
    }
    
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        vector<vector<int> > ans;
        vector<int> v;
        pathSum(root, ans, v, 0, sum);
        return ans;
    }
};