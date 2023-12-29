#include <bits/stdc++.h>
#define   nl         "\n"
#define   NN         (cout << "NO\n")
#define   YY         (cout << "YES\n")
#define   ll         long long int
#define   sz(v)      v.size()
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        ll n=sz(s);
        if(n==14 && (s[0]=='+' && s[1]=='8' && s[2]=='8' && s[3]=='0') && ((s[4]=='1' && s[5]=='7')||(s[4]=='1' && s[5]=='3')||(s[4]=='1' && s[5]=='9')||(s[4]=='1' && s[5]=='4')||(s[4]=='1' && s[5]=='5')||(s[4]=='1' && s[5]=='2')||(s[4]=='1' && s[5]=='6')||(s[4]=='1' && s[5]=='8')))
        {
            YY;
            // if() //+880
            // {
            //     if()YY;
            //     else NN;
            // }
            // else NN;
        }
        else NN;
        // 13,17,14,19,15,12,16,18
    }
    return 0;
}
//(s[4]=='1' && s[5]=='3') || (s[4]=='1' && s[5]=='7') || (s[4]=='1' && s[5]=='4') || (s[4]=='1' && s[5]=='9') || 
                //(s[4]=='1' && s[5]=='5') || (s[4]=='1' && s[5]=='2') || (s[4]=='1' && s[5]=='6') || (s[4]=='1' && s[5]=='8')