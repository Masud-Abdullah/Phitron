//Example of Pass by Value
#include<stdio.h>
void value_change(int x)
{
    x=x*10;
}
int main() {
    int num = 5;
    value_change(num);
    printf("%d", num); // Output: 5
    return 0;
}

//Example of Pass by Reference
#include<stdio.h>
void value_change(int *x)
{
    *x=500;
}
int main() {
    int num = 5;
    value_change(&num);
    printf("%d", num); // Output: 500
    return 0;
}
