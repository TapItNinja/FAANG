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
//  struct ListNode{
//     int val;
//     ListNode* next;
//  }
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev =nullptr, *curr=head;
        while(curr!=nullptr){
            ListNode* nxt=curr->next;
            // nxt->next=curr;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
};