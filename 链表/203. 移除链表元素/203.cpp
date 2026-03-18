class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy=new ListNode();
        dummy->next=head;
        ListNode* p=dummy;
        ListNode* q;
        while(p->next){
            if(p->next->val==val){
                q=p->next;
                p->next=q->next;
                delete q;
            }
            else p=p->next;
        }
        return dummy->next;
    }
};