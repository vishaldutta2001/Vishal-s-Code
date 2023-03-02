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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* head=new ListNode(); //creating a dummy node
        ListNode* temp=head;
        while(l1!=NULL || l2!=NULL || carry){ //loop works till we have a non empty node
            int sum=0;  //either in l1 or l2 or we have a carry
            
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            
            sum+=carry;
            carry=sum/10;
            
            ListNode* newNode=new ListNode(sum%10);
            temp->next=newNode;
            temp=temp->next;
        }
        return head->next;
    }
};