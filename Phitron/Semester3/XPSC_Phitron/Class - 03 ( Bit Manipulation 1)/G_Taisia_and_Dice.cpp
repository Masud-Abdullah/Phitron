#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,r,maxx,i,x;
        cin>>n>>s>>r;

        maxx=s-r;
        x=r/(n-1);
        int rem=r%(n-1);
        cout<<maxx<<" ";

        for(i=0;i<n-1;i++)
        {
            if(rem>0) cout<<x+1<<" ";
            else cout<<x<<" ";

            rem--;
        }
        cout<<endl;
    }

    return 0;
}


/*maxx=s-r;
        x=r/(n-1);

        for(i=1;i<=n-2;i++)
        {
            cout<<x<<" ";
        }
        cout<<r-(x*(n-2))<<" "<<maxx<<endl;*/