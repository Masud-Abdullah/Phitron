#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int arr[n],i,j;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(i=0; i<n; i++)
        {
            int x;
            string str;
            cin>>x>>str;
            for(j=0; str[j]!='\0'; j++)
            {
                if(str[j]=='U' && arr[i]==0)arr[i]=9;
                else if(str[j]=='U' && arr[i]!=0)arr[i]--;
                else if(str[j]=='D' && arr[i]==9)arr[i]=0;
                else if(str[j]=='D' && arr[i]!=9)arr[i]++;
            }
        }
        for(i=0;i<n;i++)cout<<arr[i]<<" ";
        cout<<endl;
    }
 
    return 0;
}