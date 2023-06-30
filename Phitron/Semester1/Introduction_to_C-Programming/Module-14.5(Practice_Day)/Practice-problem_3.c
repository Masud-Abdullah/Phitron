// Return_type+Parameter
#include<stdio.h>
int  char_to_ascii(char ch)
{
    int ascii=ch;
    return ascii;

}
int main()
{
    char cc;
    scanf("%c",&cc);
    int ascii=  char_to_ascii(cc);
    printf("%d\n",ascii);
    return 0;
}
// Return_type+No parameter
// #include <stdio.h>
// int char_to_ascii()
// {
//     char ch;
//     scanf("%c", &ch);
//     int ascii = ch;
//     return ascii;
// }
// int main()
// {
//     int ascii = char_to_ascii();
//     printf("%d\n",ascii);
//     return 0;
// }
//No return_type+parameter
// #include <stdio.h>
// void char_to_ascii(char ch)
// {
//     int ascii = ch;
//     printf("%d\n",ascii);
// }
// int main()
// {
//     char ch;
//     scanf("%c",&ch);
//     char_to_ascii(ch);
//     return 0;
// }
//No return_type+no parameter
// #include <stdio.h>
// void char_to_ascii()
// {
//     char ch;
//     scanf("%c",&ch);
//     int ascii = ch;
//     printf("%d\n",ascii);
// }
// int main()
// {
//     char_to_ascii();
//     return 0;
// }