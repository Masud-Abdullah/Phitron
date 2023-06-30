#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    name = "Tamim";
    // name.assign("Tamim");  //name = "Tamim" er moto same kaj kore.
    cout << name << endl;

    string str = "HelloWorld";
    str.erase(5);        // jei number ta function er moddhe dibo sei index theke last porjonto sob erase hoye jbe
    cout << str << endl; // Output: Hello

    string s1 = "HelloWorld";
    // s1.erase(4,1);  diye shudhu o delete korte pari then HellWorld thakto
    s1.erase(4, 3);     /// 2 ta parameter ney. prothom ta holo kon index theke delete korte chai, ar porer ta holo koyta character delete korte chai ///
    cout << s1 << endl; /// Hellrld ///

    string a = "Hello_World";
    a.replace(4, 3, "TAMIM"); //  erase+replace kore. first duita parameter diye erase function er moto kaj kore.ar last parameter ta diye bujhay amra on string diye replace korte chai.
    cout << a << endl;        // HellTAMIMorld
    a = "Hello_World";
    a.replace(4, 0, "bank");
    cout << a << endl; // Output: Hellbanko_World

    string last = "AmarDesh";
    last.insert(4, "Bangla"); // First parameter a je number deya thake oi index a second parameter er string ta insert kore.
    cout << last << endl;     // AmarBanglaDesh
    return 0;
}