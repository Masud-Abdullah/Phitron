#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);

    string x="Ratul",word;
    while(ss>>word)
    {
        if(word==x)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}

//Eta find function dia hobe na.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin,s);
//     if(s.find("Ratul")!=-1)cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
//     return 0;
// }