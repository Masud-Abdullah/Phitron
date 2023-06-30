#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    while (s.find("EGYPT") != -1)
    {   // jotokkhon porjonto pura 's' string a "EGYPT" word ta khuje pabe na totokkhon porjonto loop cholbe.
        // ar jokhon ei s.find("EGYPT") function -1 return korbe tokhoni bujhte hobe je ei string a ar
        // ektao "EGYPT" word ta nai. karon s.find() function jokhon jeta khujtese sheta khuje na pay tokhon
        // she -1 return kore.
        s.replace(s.find("EGYPT"), 5, " ");
    } // s.replace() function 3 ta parameter recieve kore. first a she ekta index er range chay je ei index theke
    // ei index porjonto part ta replace korbe. pore she oi range er charracter gulo remove kore fele.
    // first a she kake replace korbe tar starting index chay chay then next koyta index porjonto remove korbe
    // shetar value chay. last a she oi range er majher index guloke ki diye replace korbe sheita chay.
    cout << s << endl;
    return 0;
}

// Bangla niyome nije korsi
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      string s;
//      getline(cin,s);  //EGYPT
//      for(int i=0;i<s.size();i++){
//          if(i+5<=s.size() && s[i]=='E' && s[i+1]=='G' && s[i+2]=='Y' && s[i+3]=='P' && s[i+4]=='T')
//          {
//              cout<<" ";
//              i+=4;
//          }
//          else cout<<s[i];
//      }
//      return 0;
//  }
// 0 1 2 3 4 5 6 7 8 9 11 12 13