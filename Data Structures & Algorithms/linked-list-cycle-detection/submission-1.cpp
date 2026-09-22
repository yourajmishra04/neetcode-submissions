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
    bool hasCycle(ListNode* head) {
        if(head==NULL) return 0;
        ListNode* t1 = head;
        ListNode* t2 = head->next;
        while(t2!= NULL && t2->next != NULL) {
            if(t1==t2) return 1;
            t1=t1->next;
            t2=t2->next->next;
        }
        return 0;
    }
};
