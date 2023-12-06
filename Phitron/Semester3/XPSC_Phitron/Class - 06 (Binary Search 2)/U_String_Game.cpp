#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt;cin>>tt;
	while(tt--)
	{
	    int n,one=0,zero=0;cin>>n;
	    string s,t="";cin>>s;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='0')zero++;
	        else one++;
	    }
	    
	    if(min(one,zero)%2==0)cout<<"Ramos\n";
	    else cout<<"Zlatan\n";
	}
	return 0;
}