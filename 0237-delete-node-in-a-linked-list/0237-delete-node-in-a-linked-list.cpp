/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode* temphead=node;
        ListNode*prev=NULL;
        while(temphead->next!=NULL){
            temphead->val=temphead->next->val;
            prev=temphead;
            temphead=temphead->next;   
        }
        prev->next=NULL;
       delete temphead;
           
    }
};