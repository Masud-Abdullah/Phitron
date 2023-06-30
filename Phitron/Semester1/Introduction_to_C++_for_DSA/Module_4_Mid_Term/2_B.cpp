/*
A constructor is a special function in a class that is automatically called when an object of that
class is created. It is used to initialize the object's data members.  Weneed constructor to initialize the data member's of an object.


*/

// Example:
#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;

    // Constructor declaration
    Person(string person_name, int person_age)
    {
        name = person_name;
        age = person_age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    // Create an object of the Person class using the constructor
    Person person("Masud Abdullah", 22);

    // Access and use the object
    person.display();

    return 0;
}
