/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode *temp = head;
//         ListNode * slow = head ;
//         ListNode * fast = head;
//         while(fast!=NULL && fast->next!=NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//             if(slow==fast) return true;
//         }
//         return false;
//     }
// };

//using hashmap
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode *,bool> visited;
        ListNode *temp = head;
        while(temp!=NULL){
            //check if current node is already i the map
            if(visited.find(temp)!=visited.end()){
                return true;
            }
            //mark the current node as visited
            visited[temp] = true;
            temp=temp->next;
        }
        return false;// no cycle
    }
};