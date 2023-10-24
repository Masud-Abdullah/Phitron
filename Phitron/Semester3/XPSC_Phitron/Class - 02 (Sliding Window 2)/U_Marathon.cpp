#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int a,b,c,d,countt=0;
        cin>>a>>b>>c>>d;

        if(b>a)countt++;
        if(c>a)countt++;
        if(d>a)countt++;
        cout<<countt<<endl;
    }

    return 0;
}