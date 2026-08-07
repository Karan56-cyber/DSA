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
    ListNode* reverseList(ListNode* head) {
        ListNode*temp=head;
        int i=0;
        unordered_map<int,int>mp;
        while(temp!=nullptr){
            mp[i]=temp->val;
            temp=temp->next;
            i++;
        }
        temp=head;
        for(int j=i-1;j>=0;j--){
            temp->val=mp[j];
            temp=temp->next;
        }
        return head;
    }
};