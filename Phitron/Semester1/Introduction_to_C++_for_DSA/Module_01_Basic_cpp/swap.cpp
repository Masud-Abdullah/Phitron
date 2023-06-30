#include <iostream>
#include <utility>
using namespace std;

// void my_swap(int *a,int *b)
// {
//     int t = *a;
//     *a=*b;
//     *b=t;
// }


int main()
{
    int a=10,b=20;
    cout << "Before swap: "<< a << " "<< b<< endl;
   // my_swap(&a,&b);
    swap(a,b);
    cout << "After swap: "<< a << " "<< b<< endl;
  

    return 0;
}