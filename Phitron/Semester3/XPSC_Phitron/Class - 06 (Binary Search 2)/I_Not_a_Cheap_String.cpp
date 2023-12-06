#include <bits/stdc++.h>
#define   nl         "\n"
#define   NN         (cout << "NO\n")
#define   YY         (cout << "YES\n")
#define   nn         (cout << "No\n")
#define   yy         (cout << "Yes\n")
#define   ss         second
#define   ff         first
#define   all(v)     v.begin(),v.end()
#define issort(a) is_sorted(a.begin(),a.end())
#define   ll         long long int
#define   ull        unsigned long long
#define   gcd(a, b)  __gcd(a, b)
#define   lcm(a, b)  ((a/gcd(a,b)) * b)
#define   pb         push_back
#define   pii        pair<int,int>
#define   pll        pair<long long,long long>
#define   vii        vector< int >
#define   vll        vector< ll >
#define   vpi        vector< pii >
#define   vpl        vector<pll>
#define   sz(v)      v.size()
#define   mm(a, x)   memset(a, x, sizeof(a))
#define   pi         acos(-1.0)
#define   jog(v)     accumulate(v.begin(), v.end(), 0)
#define   gun(v)     accumulate(v.begin(), v.end(), 1, multiplies<int>())
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
/// sort(a,a+n,greater<int>()); Descending sort
///sort(a,a+n); array sorting[0 base index]
///reverse(a,a+n); array reverse[0 base index]
///sort(s.begin(),s.end()); string sorting
///reverse(s.begin(),s.end()); string reverse
///int max_element = *max_element(a,a+n);[0 base index]
///int min_element = *min_element(a,a+n);[0 base index]
///int max_indx = max_element(a,a+n)-a;[0 base index]
///int min_indx = min_element(a,a+n)-a;[0 base index]
/// isalpha(charracter) ei function int value return (0,1,2) kore.jodi >0 value return kore taile charracter ta alphabet ar naile alphabet na.
///isalpha() 1 return korle charracter ta capital ar 2 return korle charracter ta small.
///Substring_Check:
///str1(main string)
///str2(substring)
///if((str1.find(str2) != string :: npos))yy;
///else nn;
/// for converting string to integer: stoi(a); [a is the string ]
///int a[n];
///iota(a, a + n, 1);  >>>>>>>>>>>> eta diye n length er ekta array te 1-n porjonto value gulo sequentially set kora jay.
/// kadane algorithm for maximum subarray sum
/// __builtin_popcount(x) (__builtin_popcountll(x) for long long data type) ---->>> This function is used to count the number of one’s(set bits) in an integer.

/// __builtin_parity(x) (__builtin_parityll(x) for long long data type)   ---->>> This function is used to check the parity of a number.
///This function returns true(1) if the number has odd parity else it returns false(0) for even parity.
///parity means the number of one's of it's binary representaion is even or odd.

///__builtin_clz(x)  (__builtin_clzll(x) for long long data type)  ---->>> This function is used to count the leading zeros of the integer.

///__builtin_ctz(x)   (__builtin_ctzll(x) for long long data type)  ---->>> This function is used to count the trailing zeros of the integer.

using namespace std;
int main()
{
    FIO;
    ll t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        ll n;cin>>n;
        string ans="abcdefghijklmnopqrstuvwxyz";
        unordered_map<char,ll>mp;
        for(ll i=0;i<26;i++)
        {
            mp[ans[i]]=i+1;
        }
        ll price=0;
        for(ll i=0;i<sz(s);i++)
        {
            price+=mp[s[i]];
        }
        if(price<=n)cout<<s<<nl;
        else
        {
            unordered_map<char,multiset<ll>>mp2;
            for(ll i=0;i<sz(s);i++)
            {
                mp2[s[i]].insert(i);
            }

            string ex=s;
            sort(all(ex));
            reverse(all(ex));
            ll cnt=price;
            for(ll i=0;i<sz(ex);i++)
            {
                cnt-=mp[ex[i]];
                s[*(mp2[ex[i]].begin())]='*';
                auto it=mp2[ex[i]].begin();
                mp2[ex[i]].erase(it);
                if(cnt<=n)break;
            }
            for(int i=0;i<sz(s);i++)
            {
                if(s[i]!='*')cout<<s[i];
            }
            cout<<nl;
        }
        
    }
    return 0;
}

