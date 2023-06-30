//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G

#include<stdio.h>
int main()
{
    long long eye, mouth, body, res = 0;
    scanf("%lld %lld %lld", &eye,&mouth,&body);

    if(eye == 0 || body == 0){
        printf("0\n");
    }

    else{
        long long min = eye;
        if(mouth < min) min = mouth;
        if(body < min) min = body;

        eye -= min;
        mouth -= min;
        body -= min;

        res += min;

        if(eye/2 < body) {
            res += eye/2;
        }
        else{
         res += body;
        }

        printf("%lld\n", res);

    }
    
    return 0;
}


// #include<stdio.h>
// int main()
// {
//     long long int a,b,c;
//     scanf("%lld%lld%lld",&a,&b,&c);

//     long long int cnt=0;

//     if(a<b && a<c)cnt+=a;
//     else if(b<a && b<c)cnt+=b;
//     else cnt+=c;

// //printf("%d\n",cnt);
//     a-=cnt;
//     b-=cnt;
//     c-=cnt;

//     if(c>=a/2)
//     {
//         cnt+=a/2;
//         //else cnt+=(a/2);
//     }
//     else cnt+=c;

//     printf("%lld\n",cnt);




//     return 0;
// }

// /*458 81 280
// Output
// 270
// Answer
// 269
// */
// // 377 0 199


// // Two eyes and one body.
// //
// // One eye, one mouth, and one body.
