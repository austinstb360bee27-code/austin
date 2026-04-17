/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // 1. Create a dummy node to act as the starting point
        ListNode dummy(0);
        ListNode* tail = &dummy;

        // 2. Iterate while both lists have nodes
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                tail->next = list1;   // Link the smaller node
                list1 = list1->next;  // Move the list1 pointer
            } else {
                tail->next = list2;
                list2 = list2->next;  // Move the list2 pointer
            }
            tail = tail->next;        // Move the tail of our new list
        }

        // 3. Attach the remaining nodes (if one list finished before the other)
        if (list1 != nullptr) {
            tail->next = list1;
        } else {
            tail->next = list2;
        }

        // 4. Return the head (which is dummy.next)
        return dummy.next;
    }
};
