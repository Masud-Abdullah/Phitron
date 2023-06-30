//-----------String Lexicographical Comprarison by using built in function-------------
#include<stdio.h>
#include<string.h>
int main()
{
     char a[100],b[100];
     scanf("%s %s",a,b);
    
     int compare = strcmp(a,b);

     if(compare==0)
     {
        printf("A and B is Equal\n");
     }
     else if(compare<0)
     {
        printf("A is Small\n");
     }
      else if(compare>0)
     {
        printf("B is Small\n");
     }
    return 0;
}

//---------------------Manual Way of String Lexicographical Comprarison-----------------
// #include<stdio.h>
// int main()
// {
//     int i=0;
//      char a[100],b[100];
//      scanf("%s %s",a,b);

//      while(1)
//      {
//         if(a[i]=='\0' && b[i]=='\0')
//         {
//             printf("A and B is Equal\n");
//             break;
//         }
//         else if(a[i]=='\0')
//         {
//             printf("A is Small\n");
//             break;
//         }
//          else if(b[i]=='\0')
//         {
//             printf("B is Small\n");
//             break;
//         }
        

//         if(a[i]==b[i])
//         {
//             i++;
//         }
//         else if(a[i]<b[i])
//         {
//             printf("A is Small\n");
//             break;
//         }
//          else if(a[i]>b[i])
//         {
//             printf("B is Small\n");
//             break;
//         }
//      }
//     return 0;
// }