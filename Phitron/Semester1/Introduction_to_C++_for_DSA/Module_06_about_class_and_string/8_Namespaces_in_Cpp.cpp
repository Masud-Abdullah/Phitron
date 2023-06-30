#include <bits/stdc++.h>
using namespace std;
namespace Tamim // multiple namespace use korle different duita namespace a same variable use kora jabe na. naile compiler confused hoye jabe.
{
    int age = 25;
    void print()
    {
        cout << "From Tamim Namespace"
             << "\n";
    }
}
namespace Rizal
{
    int age2 = 22;
    void print2()
    {
        cout << "From Rizal Namespace"
             << "\n";
    }
}
using namespace Tamim;
using namespace Rizal;
int main()
{
    print();
    cout << age << endl; // Using namespace Tamim usr koray tamim namespace er element access korte (::) sign use korte hoy nai.

    print2();
    cout << age2 << endl;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// namespace Tamim
// {
//     int age=25;
//     void print()
//     {
//         cout<<"From Tamim Namespace"<<"\n";
//     }
// }
// namespace Rizal
// {
//     int age2=22;
//     void print2()
//     {
//         cout<<"From Rizal Namespace"<<"\n";
//     }
// }
// int main()
// {
//     Tamim::print();
//     cout<<Tamim::age<<endl;  //using namespace Tamim na dile (::) use kore access korte hobe.

//      Rizal::print2();
//     cout<<Rizal::age2<<endl;
//     return 0;
// }