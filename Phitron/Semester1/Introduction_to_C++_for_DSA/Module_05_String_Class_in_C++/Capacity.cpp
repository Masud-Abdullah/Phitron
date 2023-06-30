#include <bits/stdc++.h>
using namespace std;
int main()
{
    // c++ er string dynamic. mane er specific kono length nei. er size max_size er range er moddhe je kono size hote pare.
    string s = "Hello World";
    // string ekta class ar string er variable gulo ekekta object. size() -> ekta function er jonnoi
    // last a first bracket deya thake. tai amra string class er ekta object 's' create korbo ar oi 's' object
    // er size name ekta function(size()) create korbo.

    cout << s.size() << endl;

    cout << s.max_size() << endl; // output=2147483647; eta normally beshi use hoy na.
    // s.max_size() diye amar machine highest koto size er string nite parbe eta bujhay.
    // but online compiler 10^6 size porjonto string allow kore.

    cout << s.capacity() << endl; // output=15; first a string er capacity always 15 ei thakbe.
    s = "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH";
    cout << s.capacity() << endl; // ekhon capacity bere 50 hoye gese. karon amra string er size boro korechi.
    s = "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn";
    cout << s.capacity() << endl; // ekhon capacity bere 50 hoye gese. karon amra string er size boro korechi.
    // string er size joto barabo capacity o totoi bere jabe.

    string tm = "Tamim";
    cout << "Before clearing string tm: " << tm << endl;
    tm.clear(); // eta string ke clear kore dey.
    cout << "After clearing string tm: " << tm << endl;

    string null = "Hello";
    if (null.empty() == true) // null.empty() eta ekta boolean function. eta check kore string ta empty ki na.string empty hole true return kore otherwise false return kore.
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;

    null.clear();

    if (null.empty() == true)
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;

        string sz="Hello_World";
        cout<<sz<<endl;
        sz.resize(7);  //sz.resize(size) diye amra string er size barate ba komate pari.first bracket er vitor amar expected size dite hobe .
        cout<<sz<<endl;
        sz.resize(15,'T');  //but string er size kokhono barale tokhon extra space gulote ki boshbe eta comma er pore diye dite hobe. naile ultapalta jinish print hobe.
        cout<<sz<<endl;


    return 0;
}