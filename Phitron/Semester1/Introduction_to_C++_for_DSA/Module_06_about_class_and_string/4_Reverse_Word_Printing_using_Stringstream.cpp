#include<bits/stdc++.h>
using namespace std;
void print(stringstream& ss) //main function theke kokhono kono user define function a stringstream pathale always refference'&' diye pathate hobe. ekhetre pointer pathale hobe na.
{

    string word;
    if(ss>>word)
    {
        print(ss);
        cout<<word<<endl;  /// Evabe dile reverse print hobe ///
    }
    /*string word;
    if(ss>>word)
    {
        cout<<word<<endl;  /// Evabe dile shoja print hobe ///
        print(ss);
    }*/
}
int main()
{
    string s;
    getline(cin,s);
    //stringstream ss(s);
    stringstream ss; ss<<s;  //evabeo declare kora jay+ek line eo lekha jay.
    print(ss);
    
    return 0;
}

//Normally sentence theke word print kora.
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    //stringstream ss(s);
    stringstream ss; ss<<s;  //evabeo declare kora jay+ek line eo lekha jay.
    string word;
    while(ss>>word)
    {
        cout<<word<<endl;
    }
    
    return 0;
}
*/



//Question: Why stringstream used as a class?
//R string normally c++ e ekta class. Onno data type er moto na. Stringstream o ekta class. 
//Amra jei variable name likhi like ss or s. Egula actually objects of string class or stringstream class. 
//Normally class er vitor je constructor thake se jodi parameter nite pare tahole parameter pass korte hoy 
//object declare er somoy. Stringstream class er constructor parameter nite pare tai parameter hisebe 
//ekta string send kora hoy, tai syntax ta hoy emon stringstream object_name(string_name);