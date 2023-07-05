// #include <bits/stdc++.h>
// using namespace std;
// int main()
// { /// replace() function a 4 ta parameter ney. first a starting pointer second a ending pointer third a kon value ke replace korbo fourth a kon value diye replace korbo.
//     // vector<int>v={1,2,2,4,3,5,1,2,4,5,3,2};
//     // replace(v.begin(),v.end(),2,50);
//     // for(int x:v)
//     // {
//     //     cout<<x<<" ";   ///1 50 50 4 3 5 1 50 4 5 3 50  //ekhane shob 2 ke 50 diye replace kora hoyeche.
//     // }

//     vector<int> v = {1, 2, 2, 4, 3, 5, 1, 2, 4, 5, 3, 2};
//     replace(v.begin(), v.end() - 1, 2, 50);
//     for (int x : v)
//     {
//         cout << x << " "; /// 1 50 50 4 3 5 1 50 4 5 3 2  ekhane last er index bade baki shob 2 ke 60 diye replce kora hoyeche.F
//     }
//     return 0;
// }

//--------------------------------vector find------------------------------------
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1, 2, 2, 4, 3, 5, 1, 2, 4, 5, 3, 2};
    auto it=find(v.begin(),v.end(),100);
    if(it==v.end())cout<<"Not Found"<<endl;
    else cout<<"Found"<<endl;              //iterator jodi v.end() a thake tahole value ta pawa gese otherwise pawa jay nai.
    return 0;
}