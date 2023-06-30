// Yes, it is possible to return a static object from a function in C++.

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
Student cons()
{
    char name[100] = "Abdullah Tamim";
    Student Tamim(30, 9, 'A', name);
    return Tamim;
}
int main()
{

    Student Tamim = cons();

    cout << "Tamim's Info:" << endl;
    cout << Tamim.roll << endl;
    cout << Tamim.cls << endl;
    cout << Tamim.section << endl;
    cout << Tamim.name << endl;

    return 0;
}