#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s); // I am Masud Abdullah

    stringstream ss(s); //eta constructor er moto kaj krtese

    //    stringstream ss; uporer declare kora r
    //    ss << s;   // evabe declare kora same

    string word;
    int cnt = 0;
    while (ss >> word) //space pauar ag prjnto ekta word
    {
        cout << word << endl; // evabe amra word by word ber krte pari
        cnt++;
    }

    cout << "Word count: " << cnt << endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin,s); //I am Masud Abdullah

//   // stringstream ss(s); // ss na diye onno name dileu kaj krtese // eta constructor er moto kaj krtese

// //    stringstream ss; // 39 r 40 number mile(ei line r er porer line) stringstream ss(s); we moto kaj kre
// //    ss << s;   // string ta ss er grp a probesh krtese

//     // string word;
//     // ss >> word;  // ss theke word a ber hoye jacche word gula
//     // cout << word << " "; //evabe ekta ekta kre word dekha jay, so amra loop chalay kajta kore felbo
//     //  ss >> word;
//     // cout << word << " ";

//     stringstream ss(s);
//     string word;
//     int cnt=0;
//     while (ss >> word)
//     {
//         cout << word << endl;
//         cnt++;
//     }

//     cout << "Word count: " << cnt << endl;

//     return 0;
// }