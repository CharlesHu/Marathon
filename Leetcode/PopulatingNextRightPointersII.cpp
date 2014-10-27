/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if (root == NULL) return ;
        TreeLinkNode *p = root, *pre = NULL;
        root = NULL;
        while (p) {
            if (p->left || p->right) {
                if (root == NULL) {
                    if (p->left) root = p->left;
                    else if (p->right) root = p->right;
                    pre = root;
                }
                if (p->left) {
                    if (pre != p->left) pre->next = p->left;
                    pre = p->left;
                }
                if (p->right) {
                    if (pre != p->right) pre->next = p->right;
                    pre = p->right;
                }
            }
            p = p->next;
        }
        connect(root);
    }
};