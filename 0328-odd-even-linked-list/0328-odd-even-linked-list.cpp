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
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode* oddh=NULL;
        ListNode* odd2=NULL;
        ListNode* evenh=NULL;
        ListNode* even2=NULL;
        int c=1;
        
        while(head!=NULL)
        {
            if(c%2==0)
            {
                if(evenh==NULL)
                {
                    evenh=head;
                    even2=head;
                    head=head->next;
                }
                
                else
                {
                    even2->next=head;
                    even2=even2->next;
                    head=head->next;
                }
            }
            
            
            else
            {
                if(oddh==NULL)
                {
                    oddh=head;
                    odd2=head;
                    head=head->next;
                }
                
                else{
                    odd2->next=head;
                    odd2=odd2->next;
                    head=head->next;
                }
            }
            
            c++;
        }
        
        
        if(oddh==NULL)
        {
            return evenh;
        }
        
        if(evenh==NULL)
        {
            return oddh;
        }
        
        odd2->next=evenh;
        even2->next=NULL;
        
        return oddh;
        
    }
};