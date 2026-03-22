/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    ListNode* hasCycle(ListNode *head) {
        ListNode* f=head;
        ListNode* s=head;
        while(f&&f->next){
            s=s->next;
            f=f->next->next;
            if(f==s)return f;
        }
        return NULL;
    }
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* r=hasCycle(head);
        if(!r)return NULL;
        ListNode* l=head;
        while(l!=r){
            l=l->next;
            r=r->next;
        }
        return l;
    }
};