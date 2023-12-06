/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    /// Amar personal obserbation
    int n;cin>>n;
    int x;cin>>x;
    int mask = n-(1<<x);
    cout<<mask<<endl;
    return 0;
}*/
// 11111
/// Pathan Vaier Niyom
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int x;cin>>x;
    int i=255;  /// 11111111 (2^8)-1;

    int mask = (1<<x); /// ekhane Xth bit 1 baki shob bit 0;
    int newMask = (mask ^ i);  /// Eta mask er reverse.ekhane Xth bit 0 baki shob bit 1; jehetu 1 er sathe kono bit ke 
    /// XOR korle oi bit ta  change hoye jay tai amra ekhane mask er reverse jinish bananor jonno ei strategy follow korechi.

    /// bitwise NOT(~) operation use koreo mask ke reverse kora jay 
    /// but ei khetre newMask er value negative ashbe cz tokhon o sign bit o reverse kore felse.
    /// But Final ans er sathe AND(&) korar por abar correct ans dekhabe.
    int FinalAns = (newMask & n);
    cout<<FinalAns<<'\n';
    return 0;
}