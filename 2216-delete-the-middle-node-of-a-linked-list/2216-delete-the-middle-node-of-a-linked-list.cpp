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
    ListNode* deleteMiddle(ListNode* head) {

        // Edge case: if the list has only one node, return nullptr
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        ListNode* temp = head;
        int len =0;
        while(temp!= nullptr){
            len ++;
            temp = temp -> next;
        }
        int mid = len/2;
        temp = head;
        for(int i =0;i<mid-1;i++){
            temp=temp ->next;
        }
        //Delete the middle node by skipping it
        temp->next = temp->next->next;
        return head;
    }
    
};