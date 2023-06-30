#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    float height;
    int age;

    Person(string person_name, float person_height, int person_age)
    {
        name = person_name;
        height = person_height;
        age = person_age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Height: " << height << " feet" << endl;
        cout << "Age: " << age << " years" << endl;
    }
};

int main()
{
    Person *P = new Person("Masud Abdullah", 5.6, 22);

    P->display();

    return 0;
}
