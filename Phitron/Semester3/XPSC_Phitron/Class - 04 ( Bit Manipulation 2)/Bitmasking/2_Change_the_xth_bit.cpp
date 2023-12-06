#include<bits/stdc++.h>
using namespace std;
int main()
{
    /// Kono number er binary represantation er xth bit 
    /// change korte chaile oi bit er mask diye oi number ke xor korte hobe.
    int n;cin>>n;
    int x;cin>>x;
    int mask = 1<<x;
    int AfterChangeThe_XthBit = (n^mask);
    cout<<AfterChangeThe_XthBit<<'\n';
    return 0;
}