#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int age;
    int marks1;
    int marks2;

    Person(string nm,int ag){
        name=nm;
        age=ag;
    }
   Person(int mrk1,int mrk2){
        marks1=mrk1;
        marks2=mrk2;
    }
    void hello(){
        cout<<"Hello Inside Object"<<endl;
    }
    int total_number(){
        return marks1+marks2;
    }
};
int main()
{
    Person Tamim("Abdullah Tamim",22),Abdullah(55,36);
    cout<<Tamim.name<<endl;
    cout<<Tamim.age<<endl;
    Tamim.hello(); //chaile amra main function er vitor theke class er vitorer function call korte pari.
    cout<<Abdullah.total_number()<<endl;
    return 0;
}