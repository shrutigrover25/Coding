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
        
        
        if(head->next==NULL)
        {
            return NULL;
        }
        
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* q=NULL;
        
        while(fast && fast->next!=NULL)
        {
            q=slow;
            fast=fast->next->next;
            slow=slow->next;

            
        }
        
        
        q->next=q->next->next;
        
        return head;
        
    }
};