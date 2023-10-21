#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,i,j,arr[2][2];
     cin>>t;

     while(t--)
     {
         for(i=0;i<2;i++)
         {
             for(j=0;j<2;j++)
             {
                 cin>>arr[i][j];
             }
         }

         if((arr[0][0]<arr[0][1])&&(arr[0][0]<arr[1][0])&&(arr[1][0]<arr[1][1])&&(arr[0][1]<arr[1][1]))
            cout<<"YES"<<endl;
         else if((arr[0][1]<arr[1][1])&&(arr[0][1]<arr[0][0])&&(arr[0][0]<arr[1][0])&&(arr[1][1]<arr[1][0]))
         cout<<"YES"<<endl;
         else if((arr[1][1]<arr[1][0])&&(arr[1][1]<arr[0][1])&&(arr[0][1]<arr[0][0])&&(arr[1][0]<arr[0][0]))
         cout<<"YES"<<endl;
         else if((arr[1][0]<arr[0][0])&&(arr[1][0]<arr[1][1])&&(arr[1][1]<arr[0][1])&&(arr[0][0]<arr[0][1]))
         cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
     }
    return 0;
}