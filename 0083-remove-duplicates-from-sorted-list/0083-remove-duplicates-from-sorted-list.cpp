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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;    
        ListNode* curr=head, *curr1=head->next; 
        while(curr1!=nullptr){
            if(curr1->val==curr->val){
                curr1=curr1->next;
            }else{
                curr->next=curr1;
                curr=curr1;
                curr1=curr1->next;
            }
        }
        curr->next=nullptr;
        return head;
    }
};