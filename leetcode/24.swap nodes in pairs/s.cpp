/**
 * Definition for singly-linked list already provided by system.
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // 1. If list is empty or has only one node, no swap possible
        if (!head || !head->next) {
            return head;
        }

        // 2. Setup a dummy node to point to the new head
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;

        // 3. Loop while there are at least two nodes to swap
        while (prev->next && prev->next->next) {
            ListNode* first = prev->next;
            ListNode* second = prev->next->next;

            // Swapping logic:
            // Before: prev -> first -> second -> rest
            first->next = second->next; 
            second->next = first;       
            prev->next = second;        
            // After: prev -> second -> first -> rest

            // 4. Move prev pointer two steps forward for the next pair
            prev = first;
        }

        return dummy.next;
    }
};
