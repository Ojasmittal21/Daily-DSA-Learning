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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr=head;
        int c=0;
        while(curr!=NULL  && c<k){
            c++;
            curr=curr->next;
        }
        if(c==k){
            // suppose 1->2->3->4->5     This below here is (3->4->5,k)
            ListNode* curr=reverseKGroup(curr,k);
            while(c--){
                ListNode* next=head->next;
                head->next=curr;
                curr=head;
                head=next;
            }
            head=curr;
        }
        return head;
    }
};