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
    ListNode *partition(ListNode *head, int x) {
        ListNode *pre1 = new ListNode(0), *pre2 = new ListNode(0);
        ListNode *p1 = pre1, *p2 = pre2;
        while (head != NULL) {
            if (head->val < x) {
                p1->next = head;
                p1 = p1->next;
            } else {
                p2->next = head;
                p2 = p2->next;
            }
            head = head->next;
        }
        p1->next = pre2->next;
        p2->next = NULL;
        return pre1->next;
    }
};