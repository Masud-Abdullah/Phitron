#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int r, int c, char s, char *n)  //char n[] etao kora jabe.
    {
        roll = r;
        cls = c;
        section = s;
        strcpy(name, n);
    }
};
Student cons()   //jehetu ei function object return korbe tai ei function er return type class er name hobe.
{
    char name[100] = "Abdullah Tamim";
    Student Tamim(30, 9, 'A', name);
    return Tamim;
}
int main()
{
    
    Student Tamim=cons();
    
    cout << "Tamim's Info:" << endl;
    cout << Tamim.roll << " " << Tamim.cls << " " << Tamim.section << " " << Tamim.name << endl;

    // char name[100] = "Asif Abdullah";
    // Student Asif(39, 9, 'C', name);

    // cout << "Asif's Info:" << endl;
    // cout << Asif.roll << " " << Asif.cls << " " << Asif.section << " " << Asif.name << endl;

    // char name[100] = "Shahrul Islam";
    // Student Shahrul(46, 9, 'B', name);

    // cout << "Shahrul's Info:" << endl;
    // cout << Shahrul.roll << " " << Shahrul.cls << " " << Shahrul.section << " " << Shahrul.name << endl;
    return 0;
}