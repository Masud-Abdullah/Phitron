#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int star = 1;
    int line = (11 + n) / 2;
    int space = line - 1;

    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= star; k++)
        {
            cout << "*";
        }
        star += 2;
        space--;
        cout << endl;
    }

    for (int i = 1; i <= 5; i++)
    {
        int x = 5;
        while (x--)
        {
            cout << " ";
        }
        for (int j = 1; j <= n; j++)
            cout << "*";

        cout << endl;
    }
    return 0;
}