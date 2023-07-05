#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // cout<<v.max_size()<<endl;  //vector tar maximum size koto hote parbe, online compiler sadharanoto 10^6 dey

    // cout<<v.capacity()<<endl;  //output: 0 karon ekhono vector a kono element push kora hoy nai.
    // v.push_back(10);            //value rakhar sathe capacity update kre felbe
    // cout<<v.capacity()<<endl;  //push_back() korar por capacity bere 1 hoyeche. karon ekhon vector er length 1.

    // v.push_back(20);
    // cout << v.capacity()<< endl; //2
    // v.push_back(30);
    // cout << v.capacity()<< endl; //4 // she tar capacity ke double kre
    //                         // capacity er baire chole gele capacity digun kre fele
    // v.push_back(40);
    // cout << v.capacity()<< endl; //4
    // v.push_back(50);
    // cout << v.capacity()<< endl; //8

    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);
    // v.clear(); //size clear kre but internally memory clear kre na

    // cout << v.size() << endl;

    // for (int i = 0; i < v.size(); i++) //size 0 houar karone loop a dhuktese na but value ase
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // cout << v[0] << " " << v[1] << " " << v[2] << endl;

    // if(v.empty() == true) cout << "Size is 0\n";  //v.empty() function true return korbe jodi vector empty thake else false return korbe.
    // else cout << "NOt zero\n";

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    v.resize(2);  //first 2 ta bade baki element remove kore dibe.
    v.resize(7, 100);  //total vector er size 7 korar jonno 7-2=5 size increase korbe. ar ekhane new ghor gulote koto value thakbe shetao comma diye bole dite hobe otherwise oi ghorgulote 0 thakbe.
    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++) // size 0 houar karone loop a dhuktese na but value ase
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}