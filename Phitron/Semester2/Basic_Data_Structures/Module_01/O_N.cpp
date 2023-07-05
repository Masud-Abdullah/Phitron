#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int s = 0;
    for (int i = 0; i < n; i++)
        s += a[i]; // ekhane time complexity O(n);

    // for(int i=0;i<n;i++)
    // {
    //     if(i%2==0)s+=a[i];  //ekhane time complexity O(n); karon loop a total n ta step cholse.
    // }    //condition na mille kaj kore nai but condition check korar jonno holeo protibar ei loop a dhukte hoise.

    // for(int i=0;i<n;i+=2)s+=a[i];  //ekhane time complexity O(n);  muloto  n/2 complexity hoy but amra constant bad dibo.
    // constant bad dile complexityb O(n) ei hoy.
    cout << s << endl;
    return 0;
}