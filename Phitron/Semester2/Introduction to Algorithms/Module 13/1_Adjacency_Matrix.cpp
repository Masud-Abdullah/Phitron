#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,e;
    cin >> n >> e;

    int a[n+1][n+1];
    for (int i = 0; i<=n; i++)
    {
        for (int j = 0; j <=n; j++)
        {
            if(i==j && i!=0) a[i][j] = 1;
            else a[i][j] = 0;
        }
    }

    while (e--)
    {
        int u,v;
        cin >> u >> v;

        a[u][v] = 1;
        a[v][u] = 1;
    }


    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;  
    }

    // for (int i = 0; i<=n; i++)
    // {
    //     for (int j = 0; j <=n; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;  
    // }
    
     
    return 0;
}