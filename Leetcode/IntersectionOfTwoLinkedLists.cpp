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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1 = 0, len2 = 0;
        ListNode *l1 = headA, *l2 = headB;
        while (l1) {
            l1 = l1->next;
            ++len1;
        }
        while (l2) {
            l2 = l2->next;
            ++len2;
        }
        for (int i = 0; i < len2-len1; ++i) {
            headB = headB->next;
        }
        for (int i = 0; i < len1-len2; ++i) {
            headA = headA->next;
        }
        while (headA && headB) {
            if (headA == headB) break;
            headA = headA->next;
            headB = headB->next;
        }
        return (headA==headB)?headA:NULL;
    }
};