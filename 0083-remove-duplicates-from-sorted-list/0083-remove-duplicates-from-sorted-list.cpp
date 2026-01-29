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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        while(temp!=nullptr && temp->next!=nullptr){
            if(temp->val==temp->next->val){
                ListNode* curr1=temp->next;
                temp->next=curr1->next;
                delete curr1;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
};