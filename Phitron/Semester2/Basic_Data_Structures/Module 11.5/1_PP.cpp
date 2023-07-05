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
// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
//         if(head==NULL)
//         {
//             return head;
//         }

//         ListNode* tmp=head;
//         while(tmp!=NULL && tmp->val==val)
//         {
//             ListNode* deleteNode=tmp;
//             head=tmp->next;
//             tmp=tmp->next;
//             delete deleteNode;
//         }
        
//         if(tmp==NULL)return head;

//         while(tmp->next!=NULL && tmp->next->next!=NULL)
//         {
//             if(tmp->next->val==val)
//             {
//                 ListNode* deleteNode=tmp->next;
//                 tmp->next=tmp->next->next;
//                 delete deleteNode;
//             }
//             if(tmp->next->val!=val)
//             {
//                 tmp=tmp->next;
//             }
//         }
        
//         if(tmp->next!=NULL)
//         {
//             if(tmp->next->val==val)
//             {
//                 tmp->next=NULL;
//             }
//         }

//         return head;
//     }
// };