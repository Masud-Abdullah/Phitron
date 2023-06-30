#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Person *Tamim = new Person("Tamim", 22);
    Person *Asif = new Person("Asif", 15);

    Tamim = Asif; // evabe korle asif er address tamim er kache jabe.evabe korle asif er info tamim er kache jabe but asif er info delete kore dile tokhon ar tamim er kache
    // asif er info pawa jabe na. cz tamim asif er info er address rakhe ,value rakhe na.
    //  cout<<Tamim->name<<" "<<Tamim->age<<endl;  ///Asif delete er age eta thik output dibe.
    //  delete Asif;
    //  cout<<Tamim->name<<" "<<Tamim->age<<endl;   //but Asif delete er pore ar eta output dibe na.

    // Chaile evabeo kora jabe
    //   Tamim->name = Asif->name;
    //   Tamim->age = Asif->age;
    //   cout<<Tamim->name<<" "<<Tamim->age<<endl;

    // Coppying Asif's info to Tamim.
    *Tamim = *Asif;                                   // Asif er pura object tule Tamim a copy kora hocche // tai Asif delete krleu Tamim er moddhe theke jaua Asif er value gulo masud k diye access krte parbo
    cout << Tamim->name << " " << Tamim->age << endl; // dynamic object, tai -> diye access korte hoy //

    return 0;
}