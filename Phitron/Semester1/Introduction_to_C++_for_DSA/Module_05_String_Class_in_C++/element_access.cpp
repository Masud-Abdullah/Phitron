#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Hello World";
    //cin>>s;
    cout<<s[0]<<endl;  //normally amra evabei index er value access kori.
    cout<<s.at(0)<<endl;  //but ei at(size) function use koreo index access kora jay.
    cout<<s[s.size()-1]<<endl; //last index er value bangla niyom.
    cout<<s.back()<<endl; ////last index er value by using back() function.
    cout<<s.front()<<endl; //first index access korar jonno front() function use kora hpoy.

    return 0;
}