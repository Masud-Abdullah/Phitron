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
//     int size(ListNode* head){
//         int count=0;
//         ListNode* tmp=head;
//         while(tmp!=NULL)
//         {
//             count++;
//             tmp=tmp->next;
//         }
//         return count;
//     }
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int sz=size(head);
//         if(sz==n)
//         {
//             ListNode* tmp=head;
//             head=head->next;
//             delete tmp;
//             return head;
//         }

//         int pos=sz-n;
//         ListNode* tmp=head;
//         for(int i=1;i<=pos-1;i++)
//         {
//             tmp=tmp->next;
//         }
//         ListNode* deleteNode=tmp->next;
//         tmp->next=tmp->next->next;
//         delete deleteNode;
//         return head;
//     }
// };