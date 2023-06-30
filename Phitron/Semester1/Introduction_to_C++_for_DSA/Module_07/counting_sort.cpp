#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int feq[26]={0};
    for(int i=1;i<=n;i++)
    {
        char ch;
        cin>>ch;
        feq[ch-'a']++;
    }

    for(char c='a';c<='z';c++){
        if(feq[c-'a']>0){
            for(int i=1;i<=feq[c-'a'];i++){
                cout<<c;
            }
        }
    }
    return 0;
}