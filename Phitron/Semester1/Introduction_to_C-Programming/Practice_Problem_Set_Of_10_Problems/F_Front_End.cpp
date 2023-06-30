#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];

    for(int i=1,j=n; ;i++,j--)
    {
        if(i==j && n%2!=0)
        {
            cout<<a[i]<<endl;
            break;
        }
        else if(i+1==j && n%2==0)
        {
            cout<<a[i]<<" "<<a[j]<<endl;
            break;
        }
        else cout<<a[i]<<" "<<a[j]<<" ";
    }

    
   // cout<<endl;
    return 0;
}