#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int r, int c, char s, char *n) // or  Student(char nm[],int r,int c,int s)  /// ekhane "Student" holo constructor ///
    {                                      // constructor er name same cls er name,r er kono return type nei, object declare er sathe automatically call hoy
        roll = r;
        cls = c;
        section = s;
        strcpy(name, n);
    }
};
int main()  // This code will run and also it will show output but this is not a ideal way. that's why we will follow the next code.
{
    Student Tamim(30, 9, 'A', "Abdullah Tamim");

    cout << "Tamim's Info:" << endl;
    cout << Tamim.roll << " " << Tamim.cls << " " << Tamim.section << " " << Tamim.name << endl;

    Student Asif(39, 9, 'C', "Asif Abdullah");

    cout << "Asif's Info:" << endl;
    cout << Asif.roll << " " << Asif.cls << " " << Asif.section << " " << Asif.name << endl;

    Student Shahrul(46, 9, 'B', "Shahrul Islam");

    cout << "Shahrul's Info:" << endl;
    cout << Shahrul.roll << " " << Shahrul.cls << " " << Shahrul.section << " " << Shahrul.name << endl;
    return 0;
}
/*
    /// CONSTRUCTOR ///

    => Special type er function jar return type thake na
    => class er name ei constructor er name hoy
    => Automatic call hoy

*/
