#include<bits/stdc++.h>
using namespace std;
int main()
{   /// if we want to change set bit of any specific position.
    // that means 1 will be 0 and 0 remain 0.
    int n;cin>>n;   /// 11--> 1011
    int x;cin>>x;   /// 1 (we want to change the 1st set bit if there are 0 in 1st position)
    int i=63;       /// 63 ---> 111111
    int mask = 1<<x; /// 2 --> 000010 (mask of x=1)
    int NewMask = (i^mask);  ///61 --> 111101
    int ANS = (NewMask&n);
    cout<<ANS<<'\n';


    
   /* 
    int n;cin>>n;
    int x;cin>>x;
    int mask= 1<<x ;
    int flipMask = ~(mask);
    //cout<<flipMask<<'\n';  //Evabeo hobe ar ekhane flipMask er value negative ashe cz sign bit 
                            // flip hoye jacche. but jokhon amra & operation korbo tokhon kono problem hobe na.
    int ANS = (flipMask&n);
    cout<<ANS<<'\n';
    */

    return 0;
}