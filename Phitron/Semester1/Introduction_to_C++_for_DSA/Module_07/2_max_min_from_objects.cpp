#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
        cin.ignore();
        // getchar(); //cin.ignore() kaj na korle getchar() use korbo.
    }

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << a[i].name << " " << a[i].roll << " " << a[i].marks;
    // }
    Student mx, mn;
    mx.marks = INT_MIN;
    mn.marks = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        // mx.marks=max(mx.marks,a[i].marks);
        // mn.marks=min(mn.marks,a[i].marks);
        if (a[i].marks > mx.marks)
        {
            mx = a[i]; // ekhane pura a[i] object ta mx object a copy kore nicchi
        }

        if (a[i].marks < mx.marks)
        {
            mn = a[i]; // ekhane pura a[i] object ta mn object a copy kore nicchi
        }
    }

    cout << "Max Info:\n"
         << "Name: " << mx.name << endl
         << "Roll: " << mx.roll << endl
         << "Marks: " << mx.marks << endl
         << endl;
    cout << "Min Info:\n"
         << "Name: " << mn.name << endl
         << "Roll: " << mn.roll << endl
         << "Marks: " << mn.marks << endl;
    return 0;
}
// input:

// asif abdullah
// 1
// 90
// masud abdullah
// 2
// 95
// bornil akash
// 3
// 89

// output:

// Max Info:
// Name: masud abdullah
// Roll: 2
// Marks: 95

// Min Info:
// Name: bornil akash
// Roll: 3
// Marks: 89