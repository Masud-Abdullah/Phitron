#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};
int main()
{
    Student Tamim;
    Tamim.roll = 35;
    Tamim.cls = 9;
    Tamim.section = 'A';
    char tm1[100] = "Abdullah Tamim";
    strcpy(Tamim.name, tm1); // Here we copied tm1  to Tamim.name ,because we can't initialise any charracter arry or string after declaration.
    cout << "Tamim's Info:" << endl;
    cout << Tamim.roll << endl;
    cout << Tamim.cls << endl;
    cout << Tamim.section << endl;
    cout << Tamim.name << endl;

    Student Asif;
    Asif.roll = 40;
    Asif.cls = 9;
    Asif.section = 'B';
    char tm2[100] = "Asif Abdullah";
    strcpy(Asif.name, tm2); // Here we copied tm2  to Asif.name ,because we can't initialise any charracter arry or string after declaration.
    cout << "Asif's Info:" << endl;
    cout << Asif.roll << endl;
    cout << Asif.cls << endl;
    cout << Asif.section << endl;
    cout << Asif.name << endl;
    return 0;
}

