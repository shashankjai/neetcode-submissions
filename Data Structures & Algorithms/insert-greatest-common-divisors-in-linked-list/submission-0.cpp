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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL){
            return NULL;
        }

        ListNode*first=head;
        ListNode*second=head->next;
        while(second){
            int val1=first->val;
            int val2=second->val;
            int t=gcd(val1,val2);
            ListNode*g=new ListNode(t);
            first->next=g;
            g->next=second;
            first=second;
            second=second->next;
        }
        return head;
    }
};