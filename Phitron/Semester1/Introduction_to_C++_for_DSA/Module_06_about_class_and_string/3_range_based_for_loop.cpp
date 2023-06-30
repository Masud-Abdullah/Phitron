#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // for(int i=0;i<s.size();i++)  index access korte chaile evabe kora jay.
    // {
    //     cout<<s[i]<<endl;
    // }

    for (char c : s) // index access kora na lagle evabe kora jay.
    {
        cout << c << endl;
    }
    return 0;
}