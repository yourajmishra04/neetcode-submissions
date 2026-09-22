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
    ListNode* reverseList(ListNode* head) {
        if(head== NULL) return head;
        ListNode* curr = head ;ListNode* nxt= head->next ;ListNode* prev = NULL ;
        while(nxt !=NULL){
            ListNode* temp= nxt->next;
             curr->next=prev;
             prev=curr;
            
             nxt->next=curr;
             curr=nxt;
             nxt=temp;

        }
        return curr;

    }
};
