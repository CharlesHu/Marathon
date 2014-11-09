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
    ListNode *rotateRight(ListNode *head, int k) {
        if (head == NULL) return NULL;
        int len = 0;
        ListNode *p = head;
        while (p) {
            ++len;
            if (p->next == NULL) break;
            p = p->next;
        }
        p->next = head;
        for (int i = 0; i < len-k%len; ++i) {
            p = p->next;
        }
        head = p->next;
        p->next = NULL;
        return head;
    }
};