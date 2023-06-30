// The difference betweenn ascending and descending order is just
// if (a[i] > a[j])
//and 
// if (a[i] < a[j])

//Ascending order :

#include <stdio.h>
    int
    main()
{
    int n, i, j, temp;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

//_____________________________________________________________________________

// Descending order

/*
#include<stdio.h>
int main()
{
    int n, i, j, temp;
    scanf("%d", &n);
    int a[n];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(a[i]<a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}

*/