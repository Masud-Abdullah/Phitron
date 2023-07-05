#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30};
    // list<int> List2={100,200,300};
    // vector<int>v={5,15,25};
    int a[3] = {7, 77, 777};
    // list<int>newList;
    //  newList = myList;                 //We can assign like this.
    // newList.assign(myList.begin(), myList.end());

    // For vector we can assign vector A by vector B like this-->  A.assign(B);
    // But we cannot assign list as like vector.for list we have to give the begin() and end() pointer as parameter in assign function.
    // for (int val : newList)
    // {
    //     cout << val << endl;
    // }

    // myList.push_back(100);  //-->Add an element to the tail.  //NewList: 10 20 30 100
    // myList.push_front(100);  //-->Add an element to the head.  //NewList: 100 10 20 30

    // myList.pop_back();       //-->Delete the tail   // NewList: 10 20
    // myList.pop_front();      //-->Delete the head   // NewList: 20 30

    // next(myList.begin(),i)    //Access the ith element

    // myList.insert(next(myList.begin(),1),100);  //-->Insert elements at a specific position  //Output: 10 100 20 30
    // myList.insert(next(myList.begin(),1),{100,200,300});   //multiple value insert   //10 100 200 300 20 30
    // myList.insert(next(myList.begin(),1),List2.begin(),List2.end());    //Insert Another List  //10 100 200 300 20 30
    // myList.insert(next(myList.begin(),1),v.begin(),v.end());  //Insert Vector  //10 5 15 25 20 30
    // myList.insert(next(myList.begin(),1),a,a+3);  //Insert Array   //10 7 77 777 20 30

    // myList.erase(next(myList.begin(),1));  // 10 30  //Delete elements from a specific position
    // myList.erase(next(myList.begin(),1),next(myList.begin(),2));  //10 30 //it will delete all the element of the list in the given range

    // replace(myList.begin(),myList.end(),20,100);  //Replace all the value with replace_value. Not under a list STL
    // first one is which value you want to replace and the second value is by which value you want to replace.

    // for (int val : myList)
    // {
    //     cout<<val<<endl;
    // }

    auto it = find(myList.begin(), myList.end(), 20);
    // jei value ta khujtesi oita list a thakle oi value er
    // pointer return korbe otherwise list er end() pointer return korbe.

    if (it == myList.end())
    {
        cout << "Not Found\n";
    }
    else
    {
        cout << "Found\n";
    }

    return 0;
}