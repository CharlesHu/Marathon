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
    TreeNode *build(vector<int> &num, int l, int r) {
        if (l > r) return NULL;
        int mid = (l+r)/2;
        TreeNode *p = new TreeNode(num[mid]);
        p->left = build(num, l, mid-1);
        p->right = build(num, mid+1, r);
        return p;
    }
    
    TreeNode *sortedArrayToBST(vector<int> &num) {
        return build(num, 0, num.size()-1);
    }
};