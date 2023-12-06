#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;string s;cin>>s;
        int cnt=1;
        for(int i=0;i<n-2;i++)if(s[i]!=s[i+2])cnt++;
        cout<<cnt<<'\n';
    }    
    return 0;
}
//This code recieves verdict MLE
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;cin>>t;
//     while(t--)
//     {
//         map<string,int>ans;
//         int n,cnt=0;cin>>n;string s;cin>>s;
//         for(int i=0;i<n-1;i++)
//         {
//             string x=s;
//             x.erase(i,2);
//            // cout<<x<<'\n';
//             if(ans[x]==0)cnt++;
//             ans[x]++;
//         }
//        cout<<cnt<<'\n';
//     }
//     return 0;
// }