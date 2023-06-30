#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Option_1:
    // string s="Tamim Iqbal"; //Output: "Tamim Iqbal"; without constructor string initialization
    // string s("Tamim Iqbal"); //Output: "Tamim Iqbal"; initializing a string by using constructor. chaile evabeo kora jay or ager line er moto o string ke initialize kora jay.
    // Option_2:
    // string s("Tamim Iqbal", 8); //Output: "Tamim Iq" jodi constructor er moddhe duita parameter deya hoy and first er ta string hoy and last er ta ekta int hoy taile
    // first a jei string deya thakbe shei string er last a jei int 'x' ase oi int porjonto index add kora hobe. print korle string er first x ta index print hobe.
    // Option_3:
    // string a = "Tamim Iqbal";
    // string s(a, 3); //Output: "im Iqbal" Jodi constructor a first a ekta string 'a' ar last e ekta int 'x' thake and string ta vitore
    //  initialize na kore baire onno ekta string a initialize kore pore constructor er vitore just oi new string 'a'
    //  tar name parameter hishebe deya hoy taile shekhetre string er first x ta indx bade baki indx gulo  string 's' a add hobe. print korle first er x ta index bade baki gulo pabo.
    // Option_4:
    string s(5, 'u'); // Output: "uuuuu"; jodi constructor er parameter er jaygay first a ekta int 'x' thake and pore ekta char 'ch' thake
    // tahole ch namok charracter ke 'x' time add kore ekta string banano hobe.
    // x=5,ch='u' hole output hobe "uuuuu";
    cout << s << endl;
    return 0;
}