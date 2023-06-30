// #include <stdio.h>
// int main()
// {
//     int x = 5;
//     printf("%d\n", x); // x er value

//     printf("%p\n", &x); // x er address

//     int *p = &x; // pointer variable p er moddhe x er address store korlam.

//     printf("%p\n", p); // etao x er address.

//     /// De-Reference:

//     printf("%d\n", *p); // de-reference er maddhome x er value print korlam.

//     *p = 500;
//     printf("%d\n", x); // 500 print hobe....karon *p == x. tai *p er moddhe change korle x e moddheu change hoye jabe karon tader adress same

//     x = 200;
//     printf("%d\n", *p); //*p r x er adress same tai x a change korleu 8p te change hoye jbe

//     return 0;
// }

#include <stdio.h>
    int main()
    {
        const int ary[4] = {1, 2, 3, 4};
        int *p;
        p = ary + 3;
        *p = 5;
        printf("%d\n", ary[3]);
    }