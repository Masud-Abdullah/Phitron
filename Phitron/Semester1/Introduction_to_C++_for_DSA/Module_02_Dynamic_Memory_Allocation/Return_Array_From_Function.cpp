#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a; // eta ekta int er pointer so return type pointer dite hbe // a array er prothom ghorer adress rakhse
}
int main()
{
    int *a = fun(); // recieving the adress of a[0] in heap memory
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    delete[] a;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // erpor jodi onnanno kaj thake r array a ta r na lage tahole amra
    // delete[] a; evabe bole dite pari
    return 0;
}