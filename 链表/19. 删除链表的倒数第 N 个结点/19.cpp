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
        ListNode* dummy=new ListNode(0,head);
        ListNode* l=dummy;
        ListNode* r=dummy;
        for(int i=0;i<n;i++){
            if(!r)return NULL;
            r=r->next;
        }
        while(r){
            r=r->next;
            if(!r)break;
            l=l->next;
        }
        r=l->next;
        l->next=r->next;
        delete r;
        return dummy->next;
    }
};