// #include <bits/stdc++.h>
// using namespace std;
// class Student
// {
// public:
//     string nm;
//     int cls;
//     char s;
//     int id;
//     int math_marks;
//     int eng_mark;
// };
// bool cmp(Student a,Student b){
//     if((a.eng_mark+a.math_marks)>(b.eng_mark+b.math_marks))
//     {
//         return true;
//     }
//     else if((a.eng_mark+a.math_marks)==(b.eng_mark+b.math_marks))
//     {
//         if(a.id<b.id)
//         {
//             return true;
//         }
//         else return false;
//     }
//     else return false;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     Student st[n];
//     for(int i=0;i<n;i++){
//         cin>>st[i].nm;
//         cin>>st[i].cls;
//         cin>>st[i].s;
//         cin>>st[i].id;
//         cin>>st[i].math_marks;
//         cin>>st[i].eng_mark;
//         cin.ignore();
//     }

//     sort(st,st+n,cmp);

//     for(int i=0;i<n;i++){
//        cout<<st[i].nm<<" "<<st[i].cls<<" "<<st[i].s<<" "<<st[i].id<<" "<<st[i].math_marks<<" "<<st[i].eng_mark<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    string section;
    int id;
    int math;
    int eng;
};

bool cmp(Student s1, Student s2)
{
    if ((s1.math + s1.eng) > (s2.math + s2.eng))
        return true;
    else if ((s1.math + s1.eng) == (s2.math + s2.eng))
    {
        if (s1.id < s2.id)
            return true;
        else
            return false;
    }
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].cls >> s[i].section >> s[i].id >> s[i].math >> s[i].eng;
    }

    sort(s, s + n, cmp);
    cout << endl;
    for (int i = 0; i < n; i++)

    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].section << " " << s[i].id << " " << s[i].math << " " << s[i].eng << endl;
    }

    return 0;
}