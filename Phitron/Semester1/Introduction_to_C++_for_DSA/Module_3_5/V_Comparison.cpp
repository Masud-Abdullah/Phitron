#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, c;
    char b;
    cin >> a>> b >> c;

    if(b=='=')
    {
        if(a==c)cout<<"Right"<<endl;
        else cout<<"Wrong"<<endl;
    }
    else if(b=='>')
    {
        if(a>c)cout<<"Right"<<endl;
        else cout<<"Wrong"<<endl;
    }
    else if(b=='<')
    {
        if(a<c)cout<<"Right"<<endl;
        else cout<<"Wrong"<<endl;
    }
    

    return 0;
}