// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> x = {10, 20, 30, 40};
//     x.pop_back(); // pop_back() e first bracket khali thake kono parameter deya lage na.
//     x.pop_back();
//     x.push_back(10); // push_back(value) a parameter deya lage je vector er last a kon value ta push korbe.
//     for (int i = 0; i < x.size(); i++)
//     {
//         cout << x[i] << " ";
//     }

//     // vector<int>v={1,2,3};
//     // v=x;  //v ar x vector er size shoman hoile complexity hobe O(1) ar size different hobe complexity hobe O(N).ekhane N holo v ar x vector er moddhe maximum size.
//     // for(int i=0;i<v.size();i++)
//     // {
//     //     cout<<v[i]<<" ";
//     // }
//     return 0;
// }

//----------------------------------vector inser------------------------------------
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v = {1, 2, 3, 4, 5};
//     vector<int> v2 = {100, 101, 102};
//     //v.insert() function use korar shomoy ami vector er jei index a value insert korte chacchi insert() function er vitore oi index er pointer ta diye dite hobe.
//     //v.begin() diye vector er first index er pointer bujhay ar v.begin()+x diye vector er x tomo index er pointer bujhay.
//     // v.insert(v.begin()+2,10);
//     // for(int x:v)
//     // {
//     //     cout<<x<<" ";    //1 2 10 3 4 5
//     // }
//     //v.insert()  function diye ami vector insert korte chaile first a kon position a vector insert korbo tar pointer dibo then jei vector insert korbo tar shuru ar last er porer index er pointer dibo.
//     v.insert(v.begin()+2,v2.begin(),v2.end());
//     for(int x:v)
//     {
//         cout<<x<<" ";  //1 2 100 101 102 3 4 5
//     }

//     return 0;
// }

//-----------------------------vector erase--------------------------------------
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    // v.erase(v.begin()+3);   //single value delete korar jonno jei index er value delete korte chai oi index er pointer ta erase function er vitor dite hobe.
    // for(int x:v)
    // {
    //     cout<<x<<" ";    //1 2 3 5
    // }

    v.erase(v.begin() + 1, v.begin() + 3); // multiple index delete korte chaile shurur pointer ar shesher porer index er pointer diyte dite hobe. tahole oi range er vitorer value gulo delete hoye jabe.
    for (int x : v)                        // shesher pointer 'x' dile x-1 index porjonto delete korbe.
    {                                      // ekhane chaile v.end()-2 o deya jaito.
        cout << x << " ";                  // 1 4 5
    }
    // O(n+k) // k holo koto gula number delete krte hbe ta
    return 0;
}