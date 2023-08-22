#include <bits/stdc++.h>
using namespace std;

const int MX = 1e5 + 5;
vector<vector<int>> adj(MX);

int main()
{
    int N, E;
    cin >> N >> E;
    for (int i = 1; i <= E; i++)
    {
        int A, B;
        cin >> A >> B;
        adj[A].push_back(B);
        adj[B].push_back(A);
    }
    int K;
    cin >> K;

    cout << adj[K].size() << '\n';
    
    return 0;
}