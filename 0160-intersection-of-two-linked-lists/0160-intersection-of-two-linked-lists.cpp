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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    unordered_set<ListNode*>m;
    ListNode* temp=headA;
    while(temp!=NULL){
        m.insert(temp);
        temp=temp->next;
    }
    ListNode* temp2=headB;
    while(temp2!=NULL){
        if(m.find(temp2)!=m.end()){
            return temp2;
        }
        else{
            temp2=temp2->next;
        }
    }

return NULL;
        
    }
};