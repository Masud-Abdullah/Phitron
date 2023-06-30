#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;

    Node(int x)
    {
        val=x;
        next=NULL;
    }
};
int main()
{
    Node a(10);
    Node b(20);

    a.next=&b;

    cout<<a.val<<'\n';     // 10 (Normally a er value print)//
    cout<<b.val<<'\n';     // 20 // (Normally a er value print) //

    cout<<a.next->val<<'\n';   // 20 (Ekhane 'a' node er maddhome 'b' ke access kore print kora hocche derefference kore) //
    cout<<(*a.next).val<<'\n';  // 20 (Uporer line shortcut kora, shei line er mul bekkha, evabe kaj kore) // 

    return 0;
}