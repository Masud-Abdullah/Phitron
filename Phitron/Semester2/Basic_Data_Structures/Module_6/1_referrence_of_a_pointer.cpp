#include <bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
    cout << "Function er vitorer ponter er value:  " << p << endl;    // output: 0x61ff0c
    cout << "Function er vitorer ponter er address:  " << &p << endl; // Output: 0x61ff08
}
// void fun1(int * p)
// {
//     cout << &p << endl; //0x61fef0 // reference dhore rakhi nai tai p r ptr er adress vinno ekhn p te change krle ptr a change hbe na
// }
int main()
{
    int val = 10;
    int *ptr = &val;

    fun(ptr);

    cout << "Main Function er vitorer ponter er value:  " << ptr << endl;    // output: 0x61ff0c
    cout << "Main Function er vitorer ponter er address:  " << &ptr << endl; // Output: 0x61ff08
    return 0;
}

//----------------------null adress---------------------------
// #include <bits/stdc++.h>
// using namespace std;
// void fun(int *&p)
// {
//     p = NULL;
// }
// int main()
// {
//     int val = 10;
//     int *ptr = &val;

//     fun(ptr);

//     //cout << ptr << endl;      // output: 0  //null pointer er value maximum time 0 ashbe.
//    // cout << *ptr << endl;    //segmentation fault  //ekhane ptr null mane ptr karo address ei carry kortese na tai error ashtese
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void fun(int *p)
// {
//     *p = 20;      //derefference korle p pointer jar address carry kortese tar value change hobe.
//     //p=NULL;   //Main function a no change  //ekhane direct p pointer er kichu change korte chaile eta function er vitor change holeo main function a change hobe na. karon function close hole static memory er shob remove hoye jay.
//                  //but ekhane jodi main function theke pointer na pathiye pointer er refference pathaitam tahole function a derefference na koreo kono change korle tarporeo oita main function a giye change hoye jabe.
//                  //jeta pointer pathale kora jabe na.
// }
// int main()
// {
//     int val = 10;
//     int *ptr = &val;
//     cout << val << endl; // output: 10 //function call korar age.
//     fun(ptr);
//     // fun(&val);  //evabeo kora jabe. pointer variable a val er address rekhe oi pointer variable ta function a pass kora ar directly val er address ta function a pass kora same kotha.

//     cout << val << endl; // output: 20  //function call korar pore val variable tar value change hoye 20 hoye gese.
//     // cout<<*ptr<<endl;    //directly kono variabe er value print kora ar oi variable er address ta jei pointer a ase oi pointer ke derefference kore print kora same kotha.
//     // pointer ke derefference korle bujhay oi pointer ta jar address carry kortese tar value.

//     return 0;
// }

//*************special note********************************
/*
1/ jokhon main function theke kono user define function a kono pointer pathano hoy tokhon oi function a main
function theke pathano pointer er ekta copy pointer create hoy jetar value main function theke pathano pointer
er value er shoman but oi copy pointer ar main function er pointer er address vinno. tai amra oi function a
derefference na kore copy pointer a kono change korte chaile oi change ta copy pointer ei hobe ,main function er
pointer unchanged thakbe .
Example:
void fun(int *p)
{
    *p = 20;    ekhane derefference koray main function er pointer jar address carry kore tar value change hoye 20 hoye jabe.
     p=NULL;     but ekhane direct pointer a change kora hocche. ar ekhane jehetu main function theke pathano pointer er copy
                 pointer a change kora hocche tai main function er pointer unchanged thakbe. change ta copy pointer ei hobe.

}

2/ Jodi amra chai je function er vitore pointer er kono change korle sheta main function er pointer a change
hobe tahole main function theke pointer er refference pathate hobe and function a & sign diye main function
theke pathano pointer er refference ta recieve korte hobe. ebar function a pointer a kono change korle shewta
main function er pointer eo change hobe.
ei khetre function a main function theke pathano pointer er kono copy jay na borong directly main function er
pionter tai chole jay.
*/