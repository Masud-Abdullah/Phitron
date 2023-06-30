#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,mn = INT_MAX;
    cin>>n>>k;
    int rem = n%k;
    for (int i = 1; i <= n; i++)  
    {
        cin>>x;
        if(x<mn) mn = x;
        if(i%k==0)
        {
            cout<<mn<<" ";
            mn = INT_MAX;
        }
        else if(i==n)
        {
            cout<<mn<<endl;
        }
    }


    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,k;
//     cin>>n>>k;
//     int a[n+5];
//     for(int i=1;i<=n;i++)cin>>a[i];

//     int i=0;
//     int x=n;
//     if(n%k==0)x=n-k;

//     while(i<=x)
//     {
//         int mn=INT_MAX;
//         for(int j=i+1;j<=min(i+k,n);j++)
//         {
//             mn=min(mn,a[j]);
//         }
//         cout<<mn<<" ";
//         i+=k;
//     }
//     cout<<endl;

//     // for(int i=1;i<=n;i++)
//     // {

//     // }
//     return 0;
// }