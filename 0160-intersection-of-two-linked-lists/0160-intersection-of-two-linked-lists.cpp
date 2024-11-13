/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL){
            return NULL;
        }
        ListNode * tempA = headA;
        ListNode * tempB = headB;
        int lenA = 0; 
        while(tempA!=NULL){
            lenA++;
            tempA = tempA->next;
        }
        int lenB =0;
        while(tempB!=NULL){
            lenB++;
            tempB = tempB->next;
        }
        tempA=headA;
        tempB = headB;
        if(lenA>lenB){
            for(int i=0;i<lenA-lenB;i++){
                tempA = tempA->next;
            }
            while(tempA!=tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
        else{ //lenB>lenA
            for(int i=0;i<lenB-lenA;i++){
                tempB = tempB->next;
            }
            while(tempA!=tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempB;
        }


    }
};

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         // If either list is empty, there can be no intersection
//         if(headA == NULL || headB == NULL){
//             return NULL;
//         }
        
//         // Initialize two pointers to traverse each list
//         ListNode *tempA = headA;
//         ListNode *tempB = headB;
        
//         // Calculate the length of list A
//         long lenA = 0, lenB = 0;
//         while(tempA){
//             lenA++;
//             tempA = tempA->next;
//         }
        
//         // Calculate the length of list B
//         while(tempB){
//             lenB++;
//             tempB = tempB->next;
//         }
        
//         // Reset pointers to the start of each list
//         tempA = headA;
//         tempB = headB;
        
//         // Align both pointers to the same distance from the end of the lists
//         // If list A is longer, advance tempA by the difference in lengths
//         if(lenA > lenB){
//             for(int i = 0; i < lenA - lenB; i++){
//                 tempA = tempA->next;
//             }
//         }
//         // If list B is longer, advance tempB by the difference in lengths
//         else{
//             for(int i = 0; i < lenB - lenA; i++){
//                 tempB = tempB->next;
//             }
//         }
        
//         // Traverse both lists together until an intersection is found
//         // or the end of the lists is reached
//         while(tempA != tempB){
//             tempA = tempA->next;
//             tempB = tempB->next;
//         }
        
//         // Either both pointers are at the intersection node, or at NULL (no intersection)
//         return tempA;
//     }
// };
