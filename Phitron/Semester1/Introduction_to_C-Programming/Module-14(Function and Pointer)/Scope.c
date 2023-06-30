#include <stdio.h>

// Global variable declaration:
// globally declare korle jekono jayga theke acces kora jabe
int x = 500;

void fun(void)
{
    int s = 100; // s er scope shudhu fun er vitorei
    printf("fun er memory address: %p\n", &s);
    printf("x er memory address: %p\n", &x);
    printf("x er VALUE: %d\n", x);
}
//Memory address print korar jonno %p place holder use korte hobe and print korar time a '&' sine use korte hobe.
int main()
{
    int s = 200; // s er scope shudhu main() er vitorei
    printf("main er memory address: %p\n", &s);
    printf("x er memory address: %p\n", &x);
    printf("x er VALUE: %d\n", x);
    fun();

    return 0;
}