#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val=val;
        next=NULL;
    }
};
int main()
{
    Node* head = new Node(10);   //heap memory amake pointer return korbe tai Node er ekta pointer variable 'head' create kora hoyeche.
                                  // je data type, oi data type er pointer ferot dey. Tai pointer diye recieve korte hoy //
    Node* a = new Node(20); 

    head->next=a;    // ekhane '&a' use kora jabe na. karon jehetu dynamically create kora hoise tai 'head' , 'a' egula nijerai pointer. Era object rakhe na, address rakhe. Tai alda vabe '&' sign deyar dorkar nai //
   // (*head).next=a;  //chaile evabeo kora jabe. but eta amra korbo na.

   cout<<head->val<<'\n';  //10
   cout<<a->val<<'\n';     //20
   cout<<head->next->val<<'\n';  // 20 ('head' er next er vitor 'a' er address rakha ase. Derefference kore 'head' er maddhome 'a' er value print kora hocche)//

   //cout<<(*(*head).next).val<<'\n';  eta amra korbo na. eta unnecessary
    return 0;
}
