#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int>myList;  //Construct a list with 0 elements
    // list<int>List2={1,2,3,4,5};
    // list<int>myList(10)   //Construct a list with 10 elements and the value will be garbage.
    // list<int>myList(10,2);               //Construct a list with10 elements and the value will be 2.
    int a[5] = {10, 20, 30, 40, 50};
    vector<int> v = {100, 200, 300, 400, 500};
    // list<int>myList(List2);              //Construct a list by copying another list list2
    // cout<<myList.size()<<endl;    //Output: 5
    // list<int>myList(a,a+5);           //Construct a list by copying all elements from an array A of size 5.
    list<int> myList(v.begin(), v.end());

    // for(auto it=myList.begin();it!=myList.end();it++)
    // {
    //     cout<<*it<<endl;
    // }
    /// We can use .begin() ans .end() iterator int list.
    for (int val : myList)
    {
        cout << val << endl;
    }

    return 0;
}