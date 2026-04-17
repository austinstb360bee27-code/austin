class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode *curr = &dummy, *next = &dummy, *prev = &dummy;

        // 1. Count total nodes in the list
        int count = 0;
        while (curr->next) {
            curr = curr->next;
            count++;
        }

        // 2. Loop through the groups
        while (count >= k) {
            curr = prev->next; // The first node of the group
            next = curr->next; // The second node of the group
            
            // 3. Standard "Reverse Linked List" logic for k-1 connections
            for (int i = 1; i < k; i++) {
                curr->next = next->next;
                next->next = prev->next;
                prev->next = next;
                next = curr->next;
            }
            
            // 4. Move prev to the end of the newly reversed group
            prev = curr;
            count -= k;
        }

        return dummy.next;
    }
};
