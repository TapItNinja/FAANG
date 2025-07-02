class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // Dummy node before head to handle head duplicates cleanly
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        
        while (head != nullptr) {
            // Detect duplicates
            if (head->next != nullptr && head->val == head->next->val) {
                // Skip all nodes with this value
                while (head->next != nullptr && head->val == head->next->val) {
                    head = head->next;
                }
                prev->next = head->next;
            } else {
                prev = prev->next;
            }
            head = head->next;
        }
        
        return dummy->next;
    }
};
