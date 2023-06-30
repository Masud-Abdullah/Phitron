#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int ans = n + 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
// Asif Abdullah er code
/*
#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define sort(a) sort(a, a + n)
#define rev(a) reverse(a, a + n)
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define sz(v) v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        int ans = 0;
        for (char i = 'A'; i <= 'Z'; i++)  //Asif Abdullah
        {
            int cnt = 0;
            for (int j = 0; j < sz(s); j++)
            {
                if (i == s[j]) cnt++;
            }
            if(cnt >0) ans += cnt+1;
        }

        cout << ans << endl;
    }

    return 0;
}
*/
// Ager Codes
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,i,baloon=2;
        cin>>n;
        string str;
        cin>>str;

        sort(str.begin(),str.end());
        for(i=1;i<str.size();i++)
        {
            if(str[i]!=str[i-1])baloon+=2;
            else baloon++;
        }
        cout<<baloon<<endl;
    }

    return 0;
}

*/