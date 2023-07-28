#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int mx = INT_MIN;
        string ans;
        string sentence;
        getline(cin, sentence);
        stringstream ss(sentence);
        string word;
        map<string, int> mp;

        while (ss >> word)  
        {
            mp[word]++;
            if (mp[word] > mx)
            {
                mx = mp[word];
                ans = word;
            }
        }

        cout << ans << " " << mx << endl;
    }
    return 0;
}