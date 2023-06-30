#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }

    // cout<<s.begin()<<endl;  //s.begin() ekta pointer tai etake direct access kora jay na,etake derefference kore access korte hoy.
    // s.begin() ke cout korle ekta address print howar kotha jehetu s.begin() ekta pointer.
    // But string class er begin function ta private kore rakha ase.
    //  tai amra chaileo main function theke begin function ta ke use korte prbo na. but derefference kore s.begin() pointer er
    // value ta print korte parbo.
    cout << *s.begin() << endl;     // s.begin() pointer ke derefference kore er value access korlam.
    cout << *s.end() << endl;       // eta null charracter dekhabe karon s.end() null charracter ke point kore.
    cout << *(s.end() - 1) << endl; // eta last index bujhay.

    /// Iterator :
    // string ::iterator it; // loop er vitoreo chaile it pointer ke declare kora jay .ar 'it' ei nite hobe eta mendatory na but it namei etake beshi use kora hoy.
    // for (string ::iterator it = s.begin(); it < s.end(); it++)
    // {
    //     cout << *it << " ";
    //     // jehetu it ekta pointer tai oi pointer jar address carry kore tar value print korte hole pointer ke derefference kore nite hobe.
    //     // ar amra ekhane chaileo it pointer er address print korte parbo na.karon it s.begin() theke s.end() porjonto cholbe ar ei s.begin() ar s.end()function string class er vitore private kora ase. tai amra main function theke ei private function ke access korte parbo na.
    //     // but derefference kore er value access korte parbo.
    // }

    // C++ 11 er porer mane 14,17,20 compiler er khetre "string ::iterator " er er bodle "auto" keyword ta use kora hoy.
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}