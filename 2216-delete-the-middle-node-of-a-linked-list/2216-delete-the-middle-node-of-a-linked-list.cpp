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
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) return nullptr;
        ListNode *prev=head, *next1=head, *prev1=nullptr;
        while(next1!=nullptr && next1->next!=nullptr){
            prev1=prev;
            prev=prev->next;
            next1=next1->next->next;
        }
        prev1->next=prev->next;
        return head;
    }
};