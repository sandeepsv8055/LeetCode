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
    ListNode* swapNodes(ListNode* head, int k) {
        int len =0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp= temp->next;
        }
        ListNode* slow = head;
        for(int i=1;i<k;i++){
            slow = slow->next;
        }
        ListNode* fast = head;
        int m = len-k+1;
        for(int i=1;i<m;i++){
            fast=fast->next;
        }
        swap(slow->val, fast->val);
        return head;

    }
};