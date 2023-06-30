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

    cout << "\nAscending sort: ";
    
    sort(a,a+n); // n er ager ghor prjnto sort kre

    for(i=0; i<n; i++){
        cout << a[i] << " ";
    }
   
    cout << endl << endl;

    
    cout << "Descending sort: ";
    
    sort(a,a+n,greater<int>()); // n er ager ghor prjnto sort kre

    for(i=0; i<n; i++){
        cout << a[i] << " ";
    }

    char s[100] = "ffaaaggbb"; //character array(string) sort
    sort(s,s+strlen(s));

    cout << endl << endl;
    cout << s << endl; //aaabbffgg

   
    
    return 0;
}