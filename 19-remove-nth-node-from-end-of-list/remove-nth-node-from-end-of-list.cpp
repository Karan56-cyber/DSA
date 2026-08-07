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
        ListNode*temp=head;
        int length=0;
        while(temp!=nullptr){
            length+=1;
            temp=temp->next;
        }
        length=length-n;
        temp=head;
        if(length==0){
            return head->next;
        }
        for(int i=1;i<length;i++){
            temp=temp->next;
        }
       
        temp->next=temp->next->next; 
        return head;
    }
};