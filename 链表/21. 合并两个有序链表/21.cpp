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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1)return list2;
        else if(!list2)return list1;

        ListNode* dummy=new ListNode();
        ListNode* p=dummy;
        ListNode* p1=list1;
        ListNode* p2=list2;

        auto f1=[&](){p->next=p1;p1=p1->next;};
        auto f2=[&](){p->next=p2;p2=p2->next;};

        while(p1&&p2){
            p1->val<=p2->val?f1():f2();
            p=p->next;
        }
        
        p->next=p1?p1:p2;
        return dummy->next;
    }
};