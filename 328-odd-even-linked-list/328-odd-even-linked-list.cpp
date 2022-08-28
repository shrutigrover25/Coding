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
        
        ListNode* odd_h=NULL;
        ListNode* even_h=NULL;
        ListNode* odd_t=NULL;
        ListNode* even_t=NULL;
        int count=1;
        
        while(head!=NULL)
        {
            if(count%2==0)
            {
                if(even_h==NULL)
                {
                even_h=head;
                even_t=head;
                head=head->next;
                }
            
            
              else
              {
                even_t->next=head;
                even_t=even_t->next;
                head=head->next;
              }
            }
            
            else if(count%2!=0)
            {
                if(odd_h==NULL)
                {
                    odd_h=head;
                    odd_t=head;
                    head=head->next;
                }
                
                else
                {
                    odd_t->next=head;
                    odd_t=odd_t->next;
                    head=head->next;
                }
            }
            
            count++;
        }
        
        
        if(odd_h==NULL)
        {
            return even_h;
        }
        
        if(even_h==NULL)
        {
            return odd_h;
        }
        
        
        odd_t->next=even_h;
        even_t->next=NULL;
        
        return odd_h;
        
    }
};