#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int math_marks;
    int eng_mark;
};
int main()
{
    int n;
    cin>>n;
    Student st[n];
    for(int i=0;i<n;i++){
        cin>>st[i].nm;
        cin>>st[i].cls;
        cin>>st[i].s;
        cin>>st[i].math_marks;
        cin>>st[i].eng_mark;
        cin.ignore();
    }

    for(int i=n-1;i>=0;i--){
       cout<<st[i].nm<<" "<<st[i].cls<<" "<<st[i].s<<" "<<st[i].math_marks<<" "<<st[i].eng_mark<<endl;
    }
    return 0;
}