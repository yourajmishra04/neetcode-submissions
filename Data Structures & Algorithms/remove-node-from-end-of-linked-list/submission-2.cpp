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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head == NULL) return head;
           int k = 0;
        ListNode* cnt = head;
         while(cnt != NULL){
            k++;
            cnt=cnt->next;
         }

         n=k-n;
      n--;
         if(n<0) return head->next;
         ListNode* temp = head;
         while(temp != NULL && n>0){
            temp=temp->next;
            n--;
         }
        //   if(temp==head) return temp->next;
         temp->next= temp->next->next;
            
            return head;
        
    }
};
