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
bool isPalindrome(string s)
{
    for(int i=0,j=s.size()-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])return false;
    }
    return true;
}
int main()
{
    FIO;
    ll T;cin>>T;
    while(T--)
    {
        ll n,ans=LLONG_MAX;cin>>n;
        map<char,int>cnt;
        string s;cin>>s;
        if(isPalindrome(s))
        {
            cout<<0<<nl;
            continue;
        }
        for(int i=0;i<n;i++)cnt[s[i]]++;
        // for(pair<char,int> val:cnt)
        // {
        //     cout<<val.first<<" "<<val.second<<nl;
        // }
        bool f=false;
        for(char i='a';i<='z';i++)
        {
            if(cnt[i]==0)continue;
            ll remove=0,x=0;;
            string t=s,u=s;
            //cout<<i<<"-> "<<t<<nl;
            while(true)
            {
                x++;
                // if(x==50)break;
                //if(x>100000)break;
                ll tmp=0;
                for(int j=0,k=sz(t)-1;j<k;)
                {
                    if(t[j]==i && t[j]!=t[k])
                    {
                        tmp++;
                        //cout<<t[j]<<"@"<<t[k]<<"    "<<j<<" "<<k;
                        t.erase(t.begin()+j);
                        //cout<<t<<nl;
                        k--;
                        remove++;
                        //t[j]='*';
                    }
                    else if(t[k]==i && t[j]!=t[k])
                    {
                        tmp++;
                        //cout<<t[j]<<"@"<<t[k]<<" "<<j<<" "<<k;
                        t.erase(t.begin()+k);
                        //cout<<t<<nl;
                        k--;
                        remove++;
                        //t[k]='*';
                    }
                    else
                    {
                        //cout<<j<<" "<<k<<" NO "<<t<<nl;
                        j++;k--;
                    }
                }
                //out<<t<<nl;
                // string check="";
                // for(int j=0;j<n;j++)
                // {
                //     if(t[j]!='*')check+=t[j];
                // }
                //cout<<check<<nl;
                if(isPalindrome(t))
                {
                    //cout<<check<<nl;
                    ans=min(ans,tmp);
                    //cout<<ans<<nl;
                    f=true;
                    break;
                }
                else if(t==u)break;
                u=t;   
            }
        }
        if(f)cout<<ans<<nl;
        else cout<<-1<<nl;
       //cout<<nl<<nl;
    }
    return 0;
}

