#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while(t--){
        int n;
        cin>>n;
        char ch;
        cin>>ch;
        for(int i=1;i<n;i++)
        {
            cout<<ch<<" ";
        }
        cout<<ch<<endl;
    }
    return 0;
}