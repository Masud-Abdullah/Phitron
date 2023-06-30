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
    cout << Tamim->cls << endl;
    cout << Tamim->roll << endl;
    cout << Tamim->section << endl;
    cout << Tamim->name << endl;

    // Now we can delete it.

    return 0;
}
