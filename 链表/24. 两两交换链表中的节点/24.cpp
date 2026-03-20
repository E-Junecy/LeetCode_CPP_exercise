class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy=new ListNode(0,head);
        ListNode* cur=dummy;
        ListNode* p=new ListNode();
        ListNode* q=new ListNode();
        while(cur->next&&cur->next->next){
            p=cur->next;
            q=p->next;
            cur->next=q;
            p->next=q->next;
            q->next=p;
            cur=p;
        }
        return dummy->next;
    }
};