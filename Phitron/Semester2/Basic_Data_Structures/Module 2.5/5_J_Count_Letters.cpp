#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> a(26, 0); // first er value ta vector er sixe second value ta holo vector er shob index a ami initially koto value diye initialize korte chai toto.

    // for(int i=0;i<26;i++)
    // {
    //     cout<<a[i]<<endl;
    // }
    char c;
   // while((scanf("%c",&c))!=EOF)
   while(cin>>c)
    {
        a[c-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]!=0)
        {
             printf("%c : %d\n", i+97, a[i]);
        }
    }
    return 0;
}
