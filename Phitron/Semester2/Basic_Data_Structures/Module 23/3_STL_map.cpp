/*
jodi cout<<mp[something]<<endl; kori and something index unavailable thake taile first a output zero(0)
dibe as oi index ta nai. but tokhon automatically oi index a zero(0)  insert hoye jabe. and ei
kaj( cout<<mp[something]<<endl;) korar age mp.count(something) search korle eta pawa jabe na but ei
kaj korar pore mp.count(something) search korle pawa jabe. karon cout<<mp[something]<<endl; korar
sathe sathe map er something th index a 0 insert hoye gese.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp["sakib"] = 75; // same as  mp.insert({"Sakib Al Hasan",75});
    mp["akib"] = 100;
    mp["tamim"] = 28; // O(logN), n songkhok er jonno O(NlogN) //

    cout << mp["tamim"] << endl;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl; // de referrence kre value dekhtesi
    }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;               // ei khetre index hobe string ar value hobe integer
    mp.insert({"sakib al hasan", 75}); //{"Sakib Al Hasan",75} evabe pair akare insert kre
    mp.insert({"tamim iqbal", 28});
    mp.insert({"mohammad ashraful", 98});
    mp.insert({"mashrafe mortaza", 02});
    mp.insert({"mushfiqur rahim", 15});

    // Let's check if the value is present or not
    if (mp.count("masud abdullah")) // mp.count() function true/false return kore.
    {
        cout << "Ase\n"; // ekhon pawa jabe na
    }
    else
    {
        cout << "Nai\n";
    }

    cout << mp["mohammad ashraful"] << endl; // Output: 98 // oi index exist korle oi index er value dekhabe
    cout << mp["masud abdullah"] << endl;    // Output: 0  //oi index exist na korle value dekhabe zero(0)

    // Let's check if the value is present or not
    if (mp.count("masud abdullah")) // mp.count() function true/false return kore.
    {                                        // masud abdullah er value 2 bar initialize krleu count 1 e asbe
        cout << "Ase\n"; // ekhon pawa jabe   //ek index ekadikbar insert korle count barbe na just index er value update hobe
    }
    else
    {
        cout << "Nai\n";
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
*/