#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks > b.marks)
            return true; // change korte hobe tai true
        else if (a.marks < b.marks)
            return false; // change dorkar nai tai false
        else
        {
            if (a.roll > b.roll)
                return true;
            else
                return false;
        }
        // return a.marks>b.marks; // choto theke boro marks onujayi sort hbe
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " ";
        cout << pq.top().roll << " ";
        cout << pq.top().marks << endl;
        pq.pop();
    }
    return 0;
}
/*
inputs:
5
tamim 9 85
sakib 23 95
naim 25 85
shanto 36 99
rony 30 89
*/