// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t; cin>>t;
//     cin.ignore();
//     while(t--){
//         string s,x;
//         cin>>s>>x;
//         while(s.find(x)!=-1){
//             s.replace(s.find(x),x.size(),"$");
//         }
//         cout<<s<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)

    {
        string s;
        cin >> s;
        string k;
        cin >> k;

        while (s.find(k) != -1)
        {
            int inx = s.find(k);
            s.replace(inx, k.size(), "$");
        }
        cout << s << " " << endl;
    }
}