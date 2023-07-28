#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; // new code
    cin >> s;
    int dgt, sz = s.size(), indx;
    char x;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] - '0' >= 0 && s[i] - '0' <= 9)
        {
            dgt = s[i] - '0';
            string tp;
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[j] == '+' || s[j] == '-' || s[j] == '*' || s[j] == '/')
                {
                    x = s[j];
                    indx = j;
                    break;
                }
                indx = j;
                tp += s[j];
            }

            for (int j = 1; j <= dgt; j++)
            {
                cout << tp;
            }

            i = indx;

            if (i != sz - 1)
                cout << x;
        }
    }
    return 0;
}
/*
#include<bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    ll i,j,k,x=0;
    string s;
    cin>>s;
    ll y=s[0]-48;
    for(i=0; i<s.size()-1; i++)
    {
        if(s[i]=='+'|| s[i]=='-' || s[i]=='*' || s[i]=='/')
        {
            for(j=0; j<y; j++)
            {
                for(k=x+1; k<i; k++)
                {
                    cout<<s[k];
                }
            }
            cout<<s[i];
            y=s[i+1]-48;
            x=i+1;
        }
    }

    for(i=1; i<=y; i++)
    {
        for(j=x+1; j<s.size(); j++)
        {
            cout<<s[j];
        }

    }



    return 0;
}

*/