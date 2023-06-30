// Return_type+Parameter
#include <stdio.h>
char capital_to_small(char ch)
{
    char c = ch + 32;
    return c;
}
int main()
{
    char capital;
    scanf("%c", &capital);
    char res = capital_to_small(capital);
    printf("%c\n", res);
    return 0;
}
// Return_type+ No Parameter
//  #include<stdio.h>
//  char  capital_to_small()
//  {
//      char ch;
//      scanf("%c",&ch);
//      char c=ch+32;
//      return c;
//  }
//  int main()
//  {
//      char res=capital_to_small();
//      printf("%c\n",res);
//      return 0;
//  }
// No Return_type + Parameter
//  #include<stdio.h>
//  void  capital_to_small(char ch)
//  {
//      char c=ch+32;
//      printf("%c\n",c);
//  }
//  int main()
//  {
//      char ch;
//      scanf("%c",&ch);
//      capital_to_small(ch);
//      return 0;
//  }
// // No Return_type+No Parameter
// #include <stdio.h>
// void capital_to_small()
// {
//     char ch;
//     scanf("%c", &ch);
//     char c = ch + 32;
//     printf("%c\n", c);
// }
// int main()
// {
//     capital_to_small();
//     return 0;
// }