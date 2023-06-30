#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jersey_no;
    char country[100];
};
int main()
{
    Cricketer *dhoni = new Cricketer;
    dhoni->jersey_no = 7; //  (*dhoni).jersey_no << endl;
    strcpy(dhoni->country, "India");
    Cricketer *kohli = new Cricketer;
    // kohli = dhoni; //emn korle kohli er moddhe dhonir adress ditese, tai dhoni delete(oi adress delete hoye jbe) krle kohli o r access krte partese na

    *kohli = *dhoni;
    // kohli->jersey_no = dhoni->jersey_no;
    // strcpy(kohli->country, dhoni->country);

    cout << kohli->jersey_no << endl; //  cout << (*kohli).jersey_no << endl;
    cout << kohli->country << endl;

    delete dhoni;

    cout << kohli->jersey_no << endl; // 7 //kohli = dhoni; dile delete er por r access krte partam na
    cout << kohli->country << endl;   // India

    return 0;
}