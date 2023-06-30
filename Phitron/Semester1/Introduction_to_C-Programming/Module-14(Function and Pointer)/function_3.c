// No return type+parameter
void sum(int a, int b)
{
    int s = a + b;
    // return; program will end here
    printf("%d\n", s);
    // printf("%d\n", a+b);         // evabeo direct print kora jay
    // return; //ses a return deya r na thaka same
}
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    sum(a, b);
    return 0;
}
// Function a return type na thakle main function theke print kora jabe na,tokhon function er vitorei print kore dite hobe.
//  Function a return type na thakle main function a etar value store korar jonno new kono variable kono vdeclare korte hobe na.
// ---->karon return type na thakle function kono value ei retunr kore na.function er vitorei print kore dibe.
//Funtion a parameter na thekle main function er vitore value scan kora jabe na.tokhon user define function er voitorei user theke value scan korte hobe.
//Karon function a parameter thakle amra first bracket er vitore value gulo dei. but parameter na thakle amra eta korte parbo na.
//tokhon main function er vitor value scan korle amra oi value diye kichui korte parbo na. tai function a parameter na thakle always function er vitor ei value scan korte hobe.