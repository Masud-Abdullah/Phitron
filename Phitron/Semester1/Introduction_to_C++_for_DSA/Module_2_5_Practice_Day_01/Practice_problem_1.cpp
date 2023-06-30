#include<bits/stdc++.h>
using namespace std;
int *get_array(int n)
{
    int *array=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    return array;
}
int main()
{
    int n;
    cin>>n;
    int *array=get_array(n);
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    delete[] array;

     for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";  //ekhane array er shob value print hobe na. karon dynamic array ta er ager line ei delete kore fela hoyeche.
    }

    return 0;
}