#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool f = true;
    while (ss >> word)
    {
        if (f == false)
        {
            cout << " ";
        }
        else
            f = false;
        reverse(word.begin(), word.end());
        cout << word;
        // for(int i=word.size()-1;i>=0;i--){  //loop diye reverse
        //     cout<<word[i];
        // }
    }
    return 0;
}