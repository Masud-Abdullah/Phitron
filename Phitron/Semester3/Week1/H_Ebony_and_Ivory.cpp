// #include<bits/stdc++.h>
// using namespace std;
// bool dp[10005];
// bool ans(int a,int b,int c)
// {
//     if(c==0)return dp[c]=true;
//     else if(c<0)return dp[c]=false;

//     if(dp[c])return dp[c];

//     bool op1 = ans(a,b,c-a);
//     bool op2 = ans(a,b,c-b);
//     return dp[c] = op1|| op2;
// }
// int main()
// {
//     int a,b,c;
//     cin>>a>>b>>c;
//     if(ans(a,b,c))cout<<"Yes\n";
//     else cout<<"No\n";

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,smA=0,smB=0;
    cin>>a>>b>>c;
    bool f= false;
    while(true)
    {
        smA+=a;
        if(smA>c)break;
        if(smA==c || (c-smA)%b==0)
        {
            //cout<<smA<<'\n';
            f=true;
            break;
        }
    }

    while(true)
    {
        smB+=b;
        if(smB>c)break;
        if(smB==c || (c-smB)%a==0)
        {
            //cout<<smB<<'\n';
            f=true;
            break;
        }
    }

    if(f)cout<<"Yes\n";
    else cout<<"No\n";

    return 0;
}