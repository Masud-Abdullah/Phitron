#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {                      // this-> keyword diye bujhay tumi jei object niye kaj korteso ami shei object er pointer.
        this->name = name; // eta ideal niyom.
        this->age = age;
        // (*this).name=name;   //jehetu this object er pointer tai eke dot(.) diye access korte chaile direfference kore niteb hobe.
        // (*this).age=age;     //same kaj chaile evabeo kora jay.

        // direfference korle ba '->' sign use korle compiler bujhbe je this diye class er variable ke ar '=' sign er porer ta diye object er variable ke bujhacche.
    }
};
int main()
{
    Person Tamim("Abdullah Tamim", 22);
    cout << Tamim.name << " " << Tamim.age << endl;

    return 0;
}