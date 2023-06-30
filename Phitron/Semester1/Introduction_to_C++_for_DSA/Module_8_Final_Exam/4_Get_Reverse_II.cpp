#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};
int main()
{
    int n, j;
    cin >> n;
    Student st[n];
    for (int i = 0; i < n; i++)
    {
        cin >> st[i].nm;
        cin >> st[i].cls;
        cin >> st[i].s;
        cin >> st[i].id;
        cin.ignore();
    }

    for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {
        cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[j].id << endl;
    }
    return 0;
}