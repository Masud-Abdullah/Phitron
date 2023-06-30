#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int; // syntax of heap/dynamic memory allocation
    // right side er tuku heap memory te jayga dokhol korbe ar left side er tuku heap memory er address rakhar jonno tstic memory te jayga dokhol korbe.
    //   int * a kintu stack/static memory te declare hoyeche

    *a = 10; // ekhane a er moddhe value hishabe new int er address ase, tai value assign ba print korar jonno derefferencing korte hoy //

    cout << a << endl;  // address  Output: 0x1031ef0 //heap memory er jei jaygay int er jnno jayga dokhol hoise setar adress rakhse
    cout << *a << endl; // value   //Output: 10

    float *A = new float;
    *A = 7.85;
    cout << A << endl;  // address
    cout << *A << endl; // value
    delete A;
    cout << *A << endl;

    return 0;
}

/*
// Muhammad_Sayem //

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int;       // Dynmaic memory allocate korar syntax. new int value dey na, address dey. Ar tai adddress hold korar jonno pointer declare kora hoy //

    *a = 10;            // ekhane a er moddhe value hishabe new int er address ase, tai value assgn ba print korar jonno derefferencing korte hoy //

    cout << a << endl;      // Output: 0x10b1ef0 (eta addres jeta new int dise)
    cout << *a << endl;     // Output: 10 (derefferencing kore value assign korte hoy, tai print o *a evabe kora lage) //

    return 0;
}

// ------------------------------------------------------------------------ //

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float *f = new float;

    *f = 5.87;

    cout << f << endl;      // Output: 0x8d1ef0 (eta addres jeta new int dise)
    cout << *f << endl;     // Output: 5.87 (derefferencing kore value assign korte hoy, tai print o *a evabe kora lage) //

    return 0;
}
*/
