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
    int pairSum(ListNode* head) {
        
        ListNode* fast=head;
        ListNode* slow=head;
        
        while(fast && fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        
        ListNode* curr=slow;
        ListNode* next=NULL;
        ListNode* prev=NULL;
        
        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
       
        int sum=0;
        
        while(prev)
        {
            sum=max(sum,prev->val+head->val);
            prev=prev->next;
            head=head->next;
        }
        
        return sum;
        
        
        
    }
};