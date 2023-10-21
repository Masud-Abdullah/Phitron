#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        string s;
        cin>>s;

        while(1)
        {
            int T=0,i=0,m=0,u=0,r=0;

            if(n!=5)
            {
                cout<<"NO"<<endl;
                break;
            }

            for(int j=0;j<n;j++)
            {
                if(s[j]=='T')T++;
                else if(s[j]=='i')i++;
                else if(s[j]=='m')m++;
                else if(s[j]=='u')u++;
                else if(s[j]=='r')r++;
            }
            if(T==1 && i==1 && m==1 && u==1 && r==1)
            {
                cout<<"YES"<<endl;
                break;
            }
            else {
                    cout<<"NO"<<endl;
            break;
            }
        }
    }

    return 0;
}