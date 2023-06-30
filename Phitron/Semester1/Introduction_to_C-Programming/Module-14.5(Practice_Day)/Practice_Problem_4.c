//Return_type+Parameter
#include<stdio.h>
char  small_to_capital(char ch)
{
    char c=ch-32;
    return c;
} 
int main()
{
    char small;
    scanf("%c",&small);
    char res=small_to_capital(small);
    printf("%c\n",res);    
    return 0;
}
//Return_type+ No Parameter
// #include<stdio.h>
// char  small_to_capital()
// {
//     char ch;
//     scanf("%c",&ch);
//     char c=ch-32;
//     return c;
// } 
// int main()
// {
//     char res=small_to_capital();
//     printf("%c\n",res);    
//     return 0;
// }
//No Return_type + Parameter
// #include<stdio.h>
// void  small_to_capital(char ch)
// {
//     char c=ch-32;
//     printf("%c\n",c);
// } 
// int main()
// {
//     char ch;
//     scanf("%c",&ch);
//     small_to_capital(ch);  
//     return 0;
// }
//No Return_type+No Parameter
// #include<stdio.h>
// void  small_to_capital()
// {
//     char ch;
//     scanf("%c",&ch);
//     char c=ch-32;
//     printf("%c\n",c);
// } 
// int main()
// {
//     small_to_capital();  
//     return 0;
// }