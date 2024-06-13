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
ListNode*solve(ListNode*head,int k,int size){
    if(size<k){
        return head;
    }
    ListNode*forward=NULL;
        ListNode*curr=head;
        ListNode*prev=NULL;
        int i=0;
    if(size>=k){
        while(i<k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            i++;
        }
    }
       if(forward!=NULL && size>=k){
            head->next=solve(forward,k,size-k);
        }
        
   
        return prev;



}
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*temp=head;
        int size=0;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        ListNode*ans=solve(head,k,size);
        return ans;  
    }
};