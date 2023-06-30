// Phitron's Code
#include <stdio.h>
#include <string.h>
int count_vowel(char st[], int i)
{
    if (st[i] == '\0')
        return 0;
    int sz = count_vowel(st, i + 1);
    if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u')
    {
        return sz + 1;
    }
    else
        return sz;
}
int main()
{
    char st[205];
    fgets(st, 205, stdin);
    for (int i = 0; i < strlen(st); i++)
    {
        if (st[i] >= 'A' && st[i] <= 'Z')
        {
            st[i] = st[i]+32;
        }
    }
    int ans = count_vowel(st, 0);
    if(st[0]>='A' && st[0]<='Z')
    {
        printf("%d\n", ans+1);
    }
    else 
    {
        printf("%d\n", ans);
    }
    

    return 0;
}

// Amar Code
//  #include <stdio.h>
//  #include <string.h>
//  int count_vowel(char st[], int x, int y)
//  {
//      if (y == x)
//          return 0;
//      int sz = count_vowel(st, x, y + 1);
//      if (st[y] == 'a' || st[y] == 'e' || st[y] == 'i' || st[y] == 'o' || st[y] == 'u' || st[y] == 'A' || st[y] == 'O' || st[y] == 'I' || st[y] == 'E' || st[y] == 'U')
//      {
//          return sz + 1;
//      }
//      else
//          return sz;
//  }
//  int main()
//  {
//      char st[205];
//      fgets(st, 205, stdin);
//      int ln = 0;
//      for (int i = 0; i < strlen(st); i++)
//      {
//          ln++;
//      }
//      int ans = count_vowel(st, ln, -1);
//      printf("%d\n", ans);

//     return 0;
// }