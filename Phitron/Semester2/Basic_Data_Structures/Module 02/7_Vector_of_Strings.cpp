#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]); // with space
    }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<v[i]<<endl;
    // }

    
    for (string val : v)
    {
        cout << val << endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<string>v;
//     for(int i=0;i<n;i++)
//     {
//         string s;
//         cin>>s;           //without space
//         v.push_back(s);
//     }

//     // for(int i=0;i<n;i++)
//     // {
//     //     cout<<v[i]<<endl;
//     // }
//     for(string val:v)
//     {
//         cout<<val<<endl;
//     }
//     return 0;
// }