#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 50};
    // cout<<myList.size()<<endl;        //Output: 5 //Returns the size of the list.
    // cout<<myList.max_size()<<endl;   //Output: 357913941  //Returns the maximum size that the vector can hold.

    // myList.clear();              //Clears the list elements. Do not delete the memory, only clear the list.
    // cout<<myList.size()<<endl;   //Output: 0   ,becaue we have cleared the list in the previous line.
    // for(int val:myList)
    // {
    //     cout<<val<<endl;    //Because of clearing the list this loop don't give any output.
    // }

    // bool empty_or_not = myList.empty();   //Return true/false if the list is empty or not.
    // if(empty_or_not)cout<<"Tamim\n";      //Output: Tamim Becaue it's empty now because of in 9th line we have cleared the list.
    // else cout<<"Not Empty\n";

    myList.resize(2);              // Output:10 20   //Change the size of the list.
    // myList.resize(5);           //Output:10 20 0 0 0
    myList.resize(5, 100);         // Output:10 20 100 100 100
    // If we increase the list size by using the resize() function then if we do not pass any value as parameter then the extra spaces will be
    // filled by 0 and if we pass any value as parameter then the extra size will be filled by the value;
    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}