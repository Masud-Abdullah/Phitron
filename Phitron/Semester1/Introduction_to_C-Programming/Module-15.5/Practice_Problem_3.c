#include<stdio.h>
void  count_odd(int a[],int n)
{
    int cnt_odd=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)cnt_odd++;
    }
    printf("%d\n",cnt_odd);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

     count_odd(a,n);

    return 0;
}