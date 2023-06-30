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

    // void displayInfo()
    // {
    //     cout << "Name: " << name << endl;
    //     cout << "Height: " << height << " feet" << endl;
    //     cout << "Age: " << age << " years" << endl;
    // }

    // int get_age()
    // {
    //     return age;
    // }

    // string get_name()
    // {
    //     return name;
    // }
};

int main()
{
    Person *P1 = new Person("Masud Abdullah", 5.6, 22);
    Person *P2 = new Person("Asif Abdullah", 5.3, 18);

    // if (P1->get_age() > P2->get_age())
    // {
    //     cout << P1->get_name() << endl;
    // }
    // else if (P2->get_age() > P1->get_age())
    //     cout << P2->get_name() << endl;

    if (P1->age > P2->age)
        cout << P1->name << endl;
    else
        cout << P2->name << endl;

    return 0;
}
