#include<stdio.h>
int main()
{
     int ar[5]={10,20,30,40,50};
    //  printf("0th index er address - %p\n",&ar[0]);  //0061FF0C
    //  printf("0th index er address - %p\n",ar);      //0061FF0C

    // printf("0th index er value - %d\n",ar[0]);  //10
    // printf("0th index er value - %d\n",*ar);    //10

    printf("1st index er value - %d\n",ar[1]);
    printf("1st index er value - %d\n",*(ar+1));
    printf("1st index er value - %d\n",1[ar]);
    printf("1st index er value - %d\n",*(1+ar));
    return 0;
}

/*
    => ar mane holo 0-index er address je kotha, ar print korao same kotha 
    => ar name ta holo ar[0] er address
    => ar jehetu ekta address rakhe tai bola jay ar ekta pointer
    => ar = &a[0] bola jay
*/