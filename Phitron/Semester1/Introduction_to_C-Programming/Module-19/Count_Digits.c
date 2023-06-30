#include <stdio.h>
int count_digit(int n)
{
   if (n == 0)
   {
      return 0;
   }
   else
   {
      return 1 + count_digit(n / 10);
   }
}

int main() {
    int cnt = count_digit(1234);
    printf("%d\n",cnt);

    return 0;
}