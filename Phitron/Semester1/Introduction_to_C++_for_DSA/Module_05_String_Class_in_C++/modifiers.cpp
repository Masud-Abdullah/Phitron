#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Hello World";
    string b = "bangladesh";
    //a+=b;  //a=a+b; duita string jog kore ba string concatenation er kaj kore.
    a.append(b); //etao duita string jog kore.eta built in function.
    cout<<a<<endl<<b<<endl;

    string tm="Bangladesh";
    tm.push_back('i');  //push_back() er kaj: add charracter to the last of the string.
    cout<<tm<<endl;     //Bangladeshi.

    tm.pop_back();   /// Last er index er character ta ke remove kore dey ///
    cout<<tm<<endl;   ///Bangladesh

    tm.pop_back();
    cout<<tm<<endl;    ///Banglades
    return 0;
}