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
    ListNode *swapPairs(ListNode *head) {
        ListNode *pre = head, *p = head;
        while (p) {
            if (p->next) {
                if (p == head) {
                    head = p->next;
                    p->next = head->next;
                    head->next = p;
                    p = head->next->next;
                    pre = head->next;
                } else {
                    pre->next = p->next;
                    p->next = p->next->next;
                    pre->next->next = p;
                    p = p->next;
                    pre = pre->next->next;
                }
            } else {
                break;
            }
        }
        return head;
    }
};