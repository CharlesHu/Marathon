/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        ListNode *pre = new ListNode(0), *p = pre;
        while (head) {
            int t = head->val;
            head = head->next;
            if (head && head->val != t || !head) {
                p->next = new ListNode(t);
                p = p->next;
                continue;
            }
            while (head && head->val == t) head = head->next;
        }
        return pre->next;
    }
};