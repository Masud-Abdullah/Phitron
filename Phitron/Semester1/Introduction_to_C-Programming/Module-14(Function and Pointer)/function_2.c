// Return type+No Parameter
#include <stdio.h>
int sum(void) //or int sum()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int s = a + b;
    return s;
}
int main()
{
    int ans = sum();

    printf("%d\n", ans);
    //printf("%d\n",sum());//etao kora jabe
    return 0;
}

/*
    ==> Ei type er function er khetre parameter er jayga khali o rakha jay abar
    sum(void) evabeo deya jay.
    ==> sum(void) evabe dile extra kono parameter dile seta error show korbe
    ar jodi sum() eivabe faka rakha hoy taile extra parameter dile sheta ignore kore
    ==> sum(void) eivabe use kora beshi safe
*/