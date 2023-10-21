#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; //yesyesyes
    cin>>test;
    while(test--)
    {
         string str;
         cin>>str;
         int i,flag1=0,flag2=-1,len=0;
         for(i=0;i<str.size();i++)
         {
             len++;
         }
         for(i=0;i<str.size();i++)
         {
             if(str[i]!='Y' && str[i]!='e' && str[i]!='s')
             {
                 flag1=1;
                 break;
             }
         }
         if(flag1==1)cout<<"NO"<<endl;
         else if(len==1)
         {
             if(str[0]=='Y'||str[0]=='e'||str[0]=='s')cout<<"YES"<<endl;
             else cout<<"NO"<<endl;
         }
         else if(len==2)
         {
             if((str[0]=='Y'&& str[1]=='e')|| (str[0]=='s'&&str[1]=='Y') || (str[0]=='e'&&str[1]=='s')||(str[0]=='s'&&str[1]=='Y'))cout<<"YES"<<endl;
             else cout<<"NO"<<endl;
         }
         else
         {
             for(i=1;i<str.size()-1;i++)
             {
                 if((str[i]=='Y'&&(str[i-1]=='s'&&str[i+1]=='e'))||(str[i]=='e'&&(str[i-1]=='Y'&&str[i+1]=='s'))||
                    (str[i]=='s'&&(str[i-1]=='e'&&str[i+1]=='Y')))
                 {
                     flag2++;
                 }
                 else
                 {
                     flag2=-2;
                     break;
                 }
             }
             if(flag2>-1)cout<<"YES"<<endl;
             else if(flag2==-2) cout<<"NO"<<endl;
         }
    }

    return 0;
}