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
//better
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;
        // traverse fast to n+1 steps
        for(int i=1;i<=n+1;i++){
            if(fast == NULL) return head->next;
            fast = fast->next;
        }
        //move slow and fast at same pace
        while(fast!=NULL){
            slow = slow->next;
            fast = fast->next;
        }
        //now slow is the exactly the node od left which to be dlted
        slow->next = slow->next->next;
        return head;


    }
};







// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int len =0;
//         ListNode* temp = head;
//         while(temp!=NULL){
//             len++;
//             temp = temp->next;
//         }
//         if(n == len){
//             head = head->next;
//             return head;
//         }
//         //nth node from end = (len-n+1) from start
//         int m = len - n + 1 ;
//         int idx = m-1; //the idx of node to be delted
//         temp = head;
//         for(int i=1;i<=idx-1;i++){
//             temp = temp->next;
//         }
//         temp->next = temp ->next->next;
//         return head;

//     }
// };