#include<stdio.h>
int main()  
{
    int x = 10;
    printf("%p\n", &x);     // x er address: 0061FF18
    
    int* p = &x;// or int *p = &x;  --- *p hocche x er pointer
    printf("%p\n", p);     ///  pointer p er value holo x er adress (output: 0061FF18)

    /// derefference:

    printf("%d\n", *p);    /// *p pointer er maddhome x er value print (output: 10)
    
    //p = 500 bolle x change hobe na karon ekhane p er adress change kore ditesi
    *p = 500; 
    printf("%d\n", x);    /// 500 print hobe....karon *p == x. tai *p er moddhe change korle x e moddheu change hoye jabe karon tader adress same
  
    x = 200;
    printf("%d\n", *p);  //*p r x er adress same tai x a change korleu 8p te change hoye jbe

    return 0;
}