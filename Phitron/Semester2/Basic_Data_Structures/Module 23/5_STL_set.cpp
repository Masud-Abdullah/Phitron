// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     set<int> s;
//     int n;
//     cin >> n;
//     while (n--)   //O(nlogn)
//     {
//         int x;
//         cin >> x;
//         s.insert(x); // O(logN)
//         // set a value sorted akare thake
//         // set a dublicate value thake na
//     }

//     for (auto it = s.begin(); it != s.end(); it++)
//     {
//         cout << *it << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cin >> n;

    while (n--) // O(nlogn)
    {
        int x;
        cin >> x;

        s.insert(x); // O(logn)
        // set a value sorted akare thake
        // set a dublicate value thake na
    }

    // searching on O(logn):

    // cout << s.count(10) << endl;// paile count mane 1
    // cout << s.count(500) << endl; // na paile 0

    if (s.count(10))
        cout << "YES FOUND\n";
    else
        cout << "NOT FOUND\n";

    // for (auto it = s.begin(); it !=s.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    return 0;
}