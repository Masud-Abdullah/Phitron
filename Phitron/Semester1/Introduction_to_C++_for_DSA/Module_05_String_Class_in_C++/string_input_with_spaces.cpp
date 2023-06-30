#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cin.ignore(); /// int type er variable input neyar pore srting input nite chaile eita use korte hoy, nahole string ta enter input niye felbe r problem hobe///
    // getchar(); /// kichu kichu compiler e cin.ignore kaj kore na, tokhon eta use korte hoy ///

    string s;
    // cin >> s;  //cin diye space shoho string input neya jay na.
    getline(cin, s);
    // C te charracter array er space shoho input nite chaile cin.getline(array_name,array_size) evabe nitam.
    cout << s << endl;
    cout << s.size() << endl;
    return 0;
}