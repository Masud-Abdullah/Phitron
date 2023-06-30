#include <iostream>
#include <string.h>
using namespace std;



int main()
{
    char s[101];
    //cin >> s;
    cin.getline(s,101);

    cout << s << endl;
    cout << strlen(s) << endl; // fgets(s2,101,stdin); diye nile size 1 besi asto jehetu fgets enter input ney
    
    // string s;
    // getline(cin,s);
    // cout<<s<<endl;
    return 0;
}