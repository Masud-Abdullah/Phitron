#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;   //max heap

    while (true)
    {
        int c;
        cin >> c;

        if (c == 0)
        {
            int x;
            cin >> x;
            pq.push(x); // O(logN), N songkhok push korle complexity hoy O(NlogN)
        }
        else if (c == 1)
        {
            pq.pop(); // O(logN) //max tai delete hbe
        }
        else if (c == 2)
        {
            cout << pq.top() << endl; // O(1) //max ta dibe
        }
        else
            break;
    }
    return 0;
}
// min heap
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     priority_queue<int, vector<int>, greater<int>> pq; // min heap

//     while (true)
//     {
//         int c;
//         cin >> c;

//         if (c == 0)
//         {
//             int x;
//             cin >> x;
//             pq.push(x); // O(logN), N songkhok push korle complexity hoy O(NlogN)
//         }
//         else if (c == 1)
//         {
//             pq.pop(); // O(logN) //max tai delete hbe
//         }
//         else if (c == 2)
//         {
//             cout << pq.top() << endl; // O(1) //max ta dibe
//         }
//         else
//             break;
//     }
//     return 0;
// }