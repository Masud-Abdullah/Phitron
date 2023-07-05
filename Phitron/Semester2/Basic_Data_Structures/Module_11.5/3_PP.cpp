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
//     ListNode* swapNodes(ListNode* head, int k) {
//          int sz=size(head);

//         int pos=sz-k;
//         ListNode* tmp1=head;
//         ListNode* tmp2=head;
//         for(int i=1;i<=pos;i++)
//         {
//             tmp1=tmp1->next;
//         }
//         for(int i=1;i<=k-1;i++)
//         {
//             tmp2=tmp2->next;
//         }
//         swap(tmp1->val,tmp2->val);
//         return head;
//     }
// };