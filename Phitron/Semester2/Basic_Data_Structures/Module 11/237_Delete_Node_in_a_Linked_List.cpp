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
//     void deleteNode(ListNode* node) {
//         //ListNode *DeleteNode=node->next;
//         //ekhane node ta memory theke remove korte hobe eta not neccessary. 
//         //just given node er value ta linked list theke remove korlei hobe.
//         node->val=node->next->val;
//         node->next=node->next->next;
//         //delete DeleteNode;
//     }
// };