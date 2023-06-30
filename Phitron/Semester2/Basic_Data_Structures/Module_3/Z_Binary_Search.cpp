#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n,q;
    cin>>n>>q;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    sort(a.begin(),a.end());
    while(q--)
    {
        int x;
        cin>>x;
        int left=0;
        int right=n-1;
        bool flag=false;
        while(left<=right)
        {
            int mid_indx=(left+right)/2;

            if(a[mid_indx]==x)
            {
                flag =true;
                break;
            }

            if(a[mid_indx]<x)
            {
                left=mid_indx+1;
            }
            else
            {
                right=mid_indx-1;
            }
        }

        if(flag)cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }
    return 0;
}
//Normal Niyom Evabe TLE khabo.
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
//     ll n, q;
//     cin >> n >> q;
//     vector<ll> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     while (q--) // ei code a TLE khaisi and rahat vai o bolse je etay TLE khabo tai eta niye no pera only chill .
//     {
//         ll x;
//         cin >> x;
//         auto it = find(a.begin(), a.end(), x);
//         if (it != a.end())
//             cout << "found" << endl;
//         else
//             cout << "not found" << endl;
//     }
//     return 0;
// }