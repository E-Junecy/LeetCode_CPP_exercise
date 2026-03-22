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
    bool hasCycle(ListNode *head) {
        ListNode* f=head;
        ListNode* s=head;
        while(f&&f->next){
            s=s->next;
            if(!s)return false;
            f=f->next->next;
            if(!f)return false;
            if(f==s)return true;
        }
        return false;
    }
};