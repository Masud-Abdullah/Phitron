#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    // vector<int> v; //type 1

    // int n=5;
    // vector<int> v(n); //type 2

    // int n=5;              //vector constructors
    // vector<int> v(n,10); //type 3       //first a vector er size pore value dite hobe.

    // int n=5;
    // vector<int> v2(n,20); 
    // vector<int> v(v2);   //type 4     coppying vector v2 into vector v;

    // int n=6;
    // int a[6] = {2,4,6,8,10,12}; 
    // vector<int> v(a,a+n);  //type 5

    // for (int i = 0; i <v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // cout << v.size()<< endl;


    vector<int> v={1,3,5}; //initialization

    for (int i = 0; i <v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << v.size()<< endl;
     
    return 0;
}





/*phitron(Rahat khan pathan vai):

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v; type 1
    // vector<int> v(5); type 2
    // vector<int> v(5,10); type 3
    // vector<int> v2(5,100); type 4
    // vector<int> v(v2); type 4

    // int a[6]={1,2,3,4,5,6};
    // vector<int> v(a,a+6);
    vector<int> v={2,10,3};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;
    return 0;
}

*/