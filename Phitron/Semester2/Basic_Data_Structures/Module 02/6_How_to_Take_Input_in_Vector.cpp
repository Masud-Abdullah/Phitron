#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>v;    //size bole na dile pushback kre kre input nite hbe
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }

//     for(int x:v)
//     {
//         cout<<x<<" ";
//     }
//     return 0;
// }