#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
                    //lower_bound(x)  first appearance of value >= x
    int x;cin>>x;
    auto it = lower_bound(v.begin(),v.end(),x);
    int indx = it-v.begin();

    cout << "Index: " << indx << endl;
    cout << "value: " << *it << endl;
    return 0;
}

// ----------------------------------------------------------------- //

// Using Array (Same Jinish) //

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    int x;
    cin >> x;

    auto it = lower_bound(a, a+n, x);
    int index = it - a;

    cout << "Index: " << index << endl;
    cout << "value: " << *it << endl;

    return 0;
}
*/