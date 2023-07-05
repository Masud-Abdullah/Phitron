#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {20, 40, 30, 10, 50, 10, 10};
    // myList.remove(10);  //20 40 30 50   //Remove the value 10 from the list

    // list ke vector er moto sort function diye sort kora jabe na. er jonno alada sort function ase.
    // myList.sort();   //10 10 10 20 30 40 50   //Sort the list in ascending order
    // myList.sort(greater<int>());  //50 40 30 20 10 10 10  // Sort the list in descending order
    // myList.unique();  //10 20 30 40 50
    // myList.unique() function Deletes the duplicate values from the list. You must sort the list first
    // myList.reverse(); //10 10 50 10 30 40 20   //Reverse the list

    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}