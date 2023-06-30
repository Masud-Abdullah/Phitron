#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student a, Student b)
{                          // marks er upor vitti kre ascending order a sort hocche
    if (a.marks > b.marks) // ekhane choto theke boro sort hocche.sign ultiye dile boro theke choto sort hbe
        return true;
    else
        return false;
}

// bool cmp(Student a,Student b){     // roll er upor vitti kre ascending order a sort hocche
//     if(a.roll>b.roll)return true;
//     else return false;
// }
int main()
{
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
        cin.ignore();
    }

    // Marks er vittite sort kortesi
    sort(a, a + 3, cmp);

    for (int i = 0; i < 3; i++)
    {
        cout << "Name: " << a[i].name << endl;
        cout << "Roll: " << a[i].roll << endl;
        cout << "Marks: " << a[i].marks << endl
             << endl;
    }

    return 0;
}
// input:
//  asif abdullah
//  2
//  95
//  masud abdullah
//  3
//  92
//  bornil akash
//  1
//  96

// output:
//  Name: bornil akash
//  Roll: 1
//  Marks: 96

// Name: asif abdullah
// Roll: 2
// Marks: 95

// Name: masud abdullah
// Roll: 3
// Marks: 92