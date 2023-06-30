#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long L,R,sum;
        cin>>L>>R;

        if(L>R)swap(L,R);

        sum=((R*(R+1))/2)-(((L-1)*((L-1)+1))/2);
        // for(int i=L;i<=R;i++)
        // {
        //     sum+=i;
        // }
        cout<<sum<<endl;

        
    }
    return 0;
}