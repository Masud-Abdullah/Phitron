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
//     void insert_at_tail(ListNode *&head,ListNode *&tail,int val){
//         ListNode* newnode=new ListNode(val);
//         if(head==NULL)
//         {
//             head=newnode;
//             tail=newnode;
//             return;
//         }

//         tail->next=newnode;
//         tail=newnode;
//     }
//     ListNode* mergeNodes(ListNode* head) {
//         ListNode* head2=NULL;
//         ListNode* tail2=NULL;

//         ListNode* tmp=head->next;
//         int sum=0;
//         while(tmp!=NULL)
//         {
//             if(tmp->val==0)
//             {
//                 insert_at_tail(head2,tail2,sum);
//                 sum=0;
//             }
//             else if(tmp->val!=0)
//             {
//                 sum=sum+(tmp->val);
//             }
//             tmp=tmp->next;
//         }
//         return head2;
//     }
// };