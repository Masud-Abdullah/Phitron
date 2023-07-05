#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>myList = {10,20,30,40,50};
    //cout<<myList.front()<<endl;  // Output: 10 //Access the head element
    //cout<<myList.back()<<endl;  // Output: 50 //Access the tail element
    auto it = next(myList.begin(),3);  //Access the ith element
    //next(myList.begin(),indx) --->It returns a iterator. that's why we have to recieve it by a iterator.
    cout<<*it<<endl;      //Output: 40
    return 0;
}