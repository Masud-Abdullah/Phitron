#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int r, int c, char s, char *n)
    {
        roll = r;
        cls = c;
        section = s;
        strcpy(name, n);
    }
};
int main()
{
    char name[100] = "Abdullah Tamim";
    // Student *Tamim = new Student; // Constructor na thakle dynamic object evabe declare korte hobe.
    Student *Tamim = new Student(29, 9, 'A', name); // Constructor thakle dynamic object evabe declare korte hobe.

    cout << "Tamim's Information:" << endl;
    cout << (*Tamim).cls << endl;     // first dereference asif then access the name of asif
    cout << (*Tamim).roll << endl;    // normal int er khetre jemon pointer ke direfference kore value access korte hoy, oi ek e system eta //
    cout << (*Tamim).section << endl; //(*Tamim).cls evabe bracket na dile compiler *(Tamim.cls) dhore nibe tai thik moto kaj krbe na
    cout << (*Tamim).name << endl;

    // Shortcut:

    // arrow sign: (*Tamim).name = asif->name

    cout << Tamim->cls << endl; //  jodi dynamic object hoy(orthat pointer thake jake direfference korte hoy+grp ba object hoy) taholei evabe arrow diye access kra jbe//
    cout << Tamim->roll << endl;
    cout << Tamim->section << endl;
    cout << Tamim->name << endl;

    // Now we can delete it.
    delete Tamim;

    cout << "After Delete the object" << endl;
    cout << Tamim->name << endl;
    cout << Tamim->roll << endl;
    cout << Tamim->section << endl;
    cout << Tamim->cls << endl;

    return 0;
}
// int * a = new int;
// *a =10; // dereference kre access krte hoto
// cout << *a << endl;