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

    ListNode* merge(ListNode*a, ListNode*b){
        ListNode*c = new ListNode(100);
        ListNode* temp = c;
        while(a!=NULL && b!=NULL){
            if(a->val <=  b->val){
                temp->next = a;
                a = a->next;
                temp = temp->next;
            }
            else{
                temp->next = b;
                b = b->next;
                temp = temp->next;
            }
        }
        if(a==NULL) temp->next = b;
        else temp->next =a;
        return c->next;
}

    ListNode* sortList(ListNode* head) {
        //base case
        if(head == NULL|| head->next==NULL) return head;
        //slow or fast se left middle of the linked list nikalnge
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){ // /odd/even
            slow = slow->next;
            fast = fast->next->next;
        }
        //now slow is at left middle
        ListNode* a = head;
        ListNode* b = slow->next;
        slow->next =NULL;
        a = sortList(a);
        b = sortList(b);
        ListNode* c = merge(a,b);
        return c;
    }
};