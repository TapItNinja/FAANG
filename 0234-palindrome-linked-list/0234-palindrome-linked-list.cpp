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
    ListNode* reverselist(ListNode* head){
        if(head==NULL || head->next==NULL)return head;
        ListNode* newhead=reverselist(head->next);
        head->next->next=head;
        head->next=nullptr;
        return newhead;
    }
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr)return true;
        ListNode *slow=head, *fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
       ListNode* half= reverselist(slow);
        while(half!=nullptr){
            if(head->val!=half->val)return false;
            head=head->next;
            half=half->next;
        }
        return true;

    }
};