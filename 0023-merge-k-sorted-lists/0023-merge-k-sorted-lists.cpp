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

 //Approach 1 bekar
class Solution {
public:

    ListNode* merge(ListNode* a, ListNode* b) {
        ListNode* c = new ListNode(100);
        ListNode* temp = c;
        while(a!=NULL && b!=NULL){
        if(a->val <= b->val){
            temp->next = a;
            a = a->next;
            temp = temp->next;
        }
        else{ //b is less than a
            temp->next = b;
            b = b->next;
            temp = temp->next;
        }
        }
        if(a==NULL){
            temp->next = b;
        }
        else{
            temp->next = a;
        }
        return c->next;
    }

    ListNode* mergeKLists(vector<ListNode*>& arr) {
        if(arr.size()==0) return NULL;
        while(arr.size()>1){
            ListNode* a = arr[arr.size()-1];
            arr.pop_back();
            ListNode* b = arr[arr.size()-1];
            arr.pop_back();
            ListNode* c = merge(a,b);
            arr.push_back(c);
        }
        return arr[0];
    }
};