#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n;  cin>>n;
    vector<int>a;

    for(int i=0;i<n;i++)
    {
        int tm;
        cin>>tm;
        a.push_back(tm);
    }  

     vector<int>b;
     
    for(int i=0;i<n;i++)
    {
        int tm;
        cin>>tm;
        b.push_back(tm);
    }   

    
    b.insert(b.begin()+n,a.begin(),a.end());
    for(int i=0;i<2*n;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;

    return 0;
}