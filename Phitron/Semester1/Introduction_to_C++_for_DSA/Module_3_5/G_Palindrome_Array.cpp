#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool f=true;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        if(a[i]!=a[j])
        {
            f=false;
            break;
        }
    }

    if(f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

//Previous Code
// #include<stdio.h>
// int main()
// {
//     int n,i,j,flag=0;
//     scanf("%d",&n);

//     int a[n],b[n];
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     for(i=n-1,j=0;i>=0,j<n;i--,j++)
//     {
//         b[j] = a[i];
//     }

//     for(i=0;i<n;i++)
//     {
//             if(a[i]!=b[i]){
//                 flag=1;
//                 break;
//             }
//     }
//     if(flag==0)
//     {
//         printf("YES\n");
//     }
//     else if(flag==1)
//     {
//         printf("NO\n");
//     }

//     return 0;
// }