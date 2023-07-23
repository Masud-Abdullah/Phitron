#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    getline(cin, sentence);
    stringstream ss(sentence);
    string word;

    // while(ss>>word)
    // {
    //     cout<<word<<endl;
    // }

    map<string, int> mp; // initially sob value 0 thakbe
    while (ss >> word)
    {
        mp[word]++;
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // cout << mp["cricket"] << endl; //// je word er count korte chai sei word " " er vitor diye dite hobe //
    return 0;
}
/*
   input: i love cricket they love cricket
   output:
   cricket - 2
   i - 1
   love - 2
   they - 1
   */