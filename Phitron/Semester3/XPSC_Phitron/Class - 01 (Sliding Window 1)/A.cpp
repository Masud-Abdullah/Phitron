// //problem 1: Max Sum Subarray of size K

// //{ Driver Code Starts
// #include<bits/stdc++.h> 
// using namespace std; 

// // } Driver Code Ends
// class Solution{   
// public:
//     long maximumSumSubarray(int K, vector<int> &Arr , int N){
//         long  sum=0,ans=-1;
//         for(int i=0;i<K;i++)sum+=Arr[i];
        
//         ans=max(ans,sum);
        
//         for(int i=K;i<N;i++)
//         {
//             sum=sum+Arr[i]-Arr[i-K];
//             ans=max(ans,sum);
//         }
//         return ans;
//     }
// };


// //{ Driver Code Starts.
// int main() 
// { 
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int N,K;
//         cin >> N >> K;;
//         vector<int>Arr;
//         for(int i=0;i<N;++i){
//             int x;
//             cin>>x;
//             Arr.push_back(x);
//         }
//         Solution ob;
//         cout << ob.maximumSumSubarray(K,Arr,N) << endl;
//     }
//     return 0; 
// } 
// // } Driver Code Ends

//-----------------------------------------------------------------------------------------------------------------------------------------
//problem 02: First negative integer in every window of size k
///****************************Nijer niyome***********************************

//{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// vector<long long> printFirstNegativeInteger(long long int arr[],
//                                              long long int n, long long int k);

// // Driver program to test above functions
// int main() {
//     long long int t, i;
//     cin >> t;
//     while (t--) {
//         long long int n;
//         cin >> n;
//         long long int arr[n];
//         for (i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         long long int k;
//         cin >> k;

//         vector<long long> ans = printFirstNegativeInteger(arr, n, k);
//         for (auto it : ans) cout << it << " ";
//         cout << endl;
//     }
//     return 0;
// }

// // } Driver Code Ends


// vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) 
// {
//     vector<long long>ng,ans;
//     bool f=true;
//     for(int i=0;i<N;i++)
//     {
//         if(A[i]<0)
//         {
//             ng.push_back(i);
//             f=false;
//         }
//     }
//     int it=0;

//     for(int i=0;i<N-K+1;i++)
//     {
//         if(f)ans.push_back(0);
//         else
//         {
//             if(ng[it]>=i && ng[it]<i+K)ans.push_back(A[ng[it]]);
//             else if(ng[it]<i)
//             {
//                 if(it<ng.size()-1)it++;
            
//                 if(ng[it]>=i && ng[it]<i+K)ans.push_back(A[ng[it]]);
//                 else ans.push_back(0);
//             }
//             else ans.push_back(0);
//         }
//     }

//     // for(auto val:ans)
//     // {
//     //     cout<<val<<" ";
//     // }
//     // cout<<'\n';
//     return ans;
// }


//*************************************Pathan Vai er Niyome***************************
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) 
{
    long long i=0,j=0;
    queue<long long>q;
    vector<long long>ans;
    while(j<N)
    {
        if(A[j]<0)q.push(A[j]);
        if(j>=K-1)
        {
            if(!q.empty())ans.push_back(q.front());
            else ans.push_back(0);
            
            if(A[i]<0)q.pop();
            i++;
        }
        j++;
    }
    return ans;
}

//Problem:3
//Count Occurences of Anagrams
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    int feq[26]={0};
	    for(int i=0;i<pat.size();i++)feq[pat[i]-'a']++;
	    
	    int cnt=0,j=0,tmp[26]={0};
	    for(int i=0;i<pat.size()-1;i++)tmp[txt[i]-'a']++;
	    
	    for(int i=pat.size()-1;i<txt.size();i++)
	    {
	        tmp[txt[i]-'a']++;
	        bool f=true;
	        for(int i=0;i<26;i++)
	        {
	            if(feq[i]!=tmp[i])
	            {
	                f=false;
	                break;
	            }
	        }
	        if(f)cnt++;
	        
	        tmp[txt[j]-'a']--;
	        j++;
	    }
	    return cnt;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends