#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(char *n, int r, char s, int m, int c)
    {
        strcpy(name, n);
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }
};
int main()
{
    char T[100] = "Tamim", A[100] = "Asif", S[100] = "Sayem";
    Student one(T, 370, 'B', 80, 12);
    Student two(A, 186, 'B', 90, 12);
    Student three(S, 187, 'B', 95, 12);

    if (one.math_marks > two.math_marks && one.math_marks > three.math_marks)
    {
        cout << one.name << endl;
    }
    else if (two.math_marks > one.math_marks && two.math_marks > three.math_marks)
    {
        cout << two.name << endl;
    }
    else
        cout << three.math_marks << endl;

    return 0;
}