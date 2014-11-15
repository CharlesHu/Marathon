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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *f = head, *s = head, *pre = head;
        for (int i = 0; i < n; ++i) {
            f = f->next;
        }
        while (f) {
            if (s != head) pre = pre->next;
            s = s->next;
            f = f->next;
        }
        if (s == head) head = head->next;
        else pre->next = pre->next->next;
        return head;
    }
};