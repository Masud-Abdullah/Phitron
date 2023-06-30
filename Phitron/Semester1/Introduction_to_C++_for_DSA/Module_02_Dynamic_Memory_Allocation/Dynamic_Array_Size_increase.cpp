#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int a[5]; //etar jehetu r kaj thkbe na tai delete krte hbe tai dynamic memory allocate krte hbe//
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    int *b = new int[7]; // int b[7] - eta dynamic na korleo somossa nai karon eta niyei kaj kora hobe , eta delete kora hobe na //

    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    b[5] = 60;
    b[6] = 70;

    for (int i = 0; i < 7; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    // Delete an array
    delete[] a; // jodi shudhu delete a; lekha hoy tahole shudhu a[0] delete korbe //
    // for(int i=0;i<5;i++)
    // {
    //     cout<<a[i]<<" ";  //it is deleted
    // }
    return 0;
}