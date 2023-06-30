//Question: Write a function named is_palindrome() which will receive a string as 
//parameter from the main function and this function will return 1 if the string is
// palindrome, otherwise it will return 0. And with the help of this 1 or 0 print 
//“Palindrome” or “Not Palindrome” in the main function.	

#include <stdio.h>
#include <string.h>
int is_palindrome(char ch[])
{
    int len = strlen(ch);
    int val = 1;
    for (int i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        if (ch[i] != ch[j])
        {
            val = 0;
            break;
        }
    }

    return val;
}
int main()
{
    char ch[100];
    scanf("%s", ch);
    int ans = is_palindrome(ch);

    if (ans)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}