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
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* temp = head;
        while(temp!=nullptr){  //O(n)
            length++;
            temp = temp -> next;
        }
        int middle = length/2;
        temp = head;  //reset temp back to the beginning ...
        for(int i=0;i<middle;i++){
            temp = temp->next;
        }
        return temp;
    }
};

//two pointer 