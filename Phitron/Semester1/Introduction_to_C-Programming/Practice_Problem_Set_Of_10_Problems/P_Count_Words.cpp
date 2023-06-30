// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[1000000];
//     fgets(s, 1000000, stdin);
//     int i = 0, ln = 0;
//     // while (s[i] != '\0')
//     // {
//     //     ln++;
//     //     i++;
//     // }
//     // printf("%d\n",ln);

//     int cnt = 1;
//     for (i = 1; i < strlen(s)-1; i++)
//     {
//         int tm1 = 0, tm2 = 0;

//         if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')))
//         {
//             tm1 = 1;
//         }

//          if((s[i+1]>='a' && s[i+1]<='z')||(s[i+1]>='A'&& s[i+1]<='Z'))
//         {
//             tm2=1;
//         }

//         if(tm1==1 && tm2==1)cnt++;
//     }
//     printf("%d\n",cnt);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int cnt=1,i;
    getline(cin,str);


    for(i=1;i<str.size();i++)
    {
        if(!(str[i] >= 'A' && str[i] <= 'z') && (str[i+1] >= 'A' && str[i+1] <= 'z'))
        {
            cnt++;
        }

        else
            continue;
    }


    cout << cnt << endl;

    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string str;
//     int cnt=1,i;
//     getline(cin,str);


//     for(i=1;i<str.size();i++)
//     {
//         if(str[i] == '?' || str[i] == ',' || str[i] == '.' || str[i] == '!') str[i] = ' ';
        
//         if((str[i] >= 'A' && str[i] <= 'z') && (str[i-1] == ' '))
//         {
//             cnt++;
//         }

//         else
//             continue;
//     }


//     cout << cnt << endl;

//     return 0;
// }
