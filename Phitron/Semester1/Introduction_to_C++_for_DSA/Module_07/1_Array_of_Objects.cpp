#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks; // object er array banale class er vitor constructor thaka jabe na.
};
int main()
{
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        // cin >> a[i].name; space chara input nibe
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
        cin.ignore(); /// Loop chaliye input neyar somoy 2nd jon er name neyar age marks input neya hoy, jeta integer. Ejonno cin.ignore(); use kora hoise ///
        // getchar();  //cin.ignore() kaj na korle getchar() use korbo.
    }

    for (int i = 0; i < 3; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}