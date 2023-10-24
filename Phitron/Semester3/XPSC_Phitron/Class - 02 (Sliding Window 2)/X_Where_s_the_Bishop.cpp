#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char ch[9][9];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>ch[i][j];
            }
        }

        bool f=false;
        for(int i=1;i<7;i++)
        {
            for(int j=1;j<7;j++)
            {
                if(ch[i][j]=='#' && ch[i-1][j-1]=='#' && ch[i-1][j+1]=='#' && ch[i+1][j-1]=='#' && ch[i+1][j+1]=='#')
                {
                    cout<<i+1<<" "<<j+1<<'\n';
                    f=true;
                    break;
                }
            }
            if(f)break;
        }
    }
    return 0;
}