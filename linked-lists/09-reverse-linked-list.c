/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* current = head;
    
    while (current != NULL) {
        struct ListNode* nextTemp = current->next; // Store next node
        current->next = prev;                      // Reverse the current node's pointer
        prev = current;                            // Move prev one step forward
        current = nextTemp;                        // Move current one step forward
    }
    
    return prev; // prev will be the new head of the reversed list
}