//------------------Nijer niyome-------------------
//Problem: 01
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;cin>>n>>k;
    long long int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    long long int sm=0,ans=0,i=0,j=0;
    while(j<n)
    {
        //if(j==n-1)break;
        if(sm==k)
        {
            ans=max(ans,j-i);
        }

        if(sm<=k)
        {
            sm+=a[j];
            j++;
        }
        else if(sm>=k)
        {
            sm-=a[i];
            i++;
        }
        //cout<<sm<<" "<<i<<" "<<j<<'\n';
    }
        if(sm==k && ans<j-i)
        {
            ans=j-i;
        }
    cout<<ans<<'\n';
    return 0;
}

int longestSubarrayWithSumK(vector<int> a, long long k) {
    long long int sm=0,i=0,j=0;
    int ans=0;
    while(j<a.size())
    {
        //if(j==n-1)break;
        if(sm==k && ans<j-i)
        {
            ans=j-i;
        }

        if(sm<=k)
        {
            sm+=a[j];
            j++;
        }
        else if(sm>k)
        {
            sm-=a[i];
            i++;
        }
        //cout<<sm<<" "<<i<<" "<<j<<'\n';
    }
        if(sm==k && ans<j-i)
        {
            ans=j-i;
        }
    return ans;
}

//Pathan vaier code: longest-subarray-with-sum-k
#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
    long long int sm=0,i=0,j=0;
    int ans=0;
    while(j<a.size())
    {
        sm+=a[j];
        while(sm>k)
        {
            sm-=a[i];
            i++;
        }
        if(sm==k && ans<(j-i)+1)
        {
            ans = (j-i+1);
        }
        j++;
    }
    return ans;
}
int main()
{
    int n;cin>>n;
    long long k;cin>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int ans = longestSubarrayWithSumK(a,k);
    cout<<ans<<'\n';
    return 0;
}

//Longest Sub-Array with Sum K (with Negative value in array)
//Problem: 02
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        long long int sm=0;
        int ans=0;
        map<long long,int>mp;
        for(int i=0;i<N;i++)
        {
            sm+=A[i];
            if(sm==K)
            {
                ans = max(ans,i+1);
            }
            else if(mp.find(sm-K)!=mp.end())
            {
                ans = max(ans,i-mp[sm-K]);
            }
            
            if(mp.find(sm)==mp.end())mp[sm]=i;
        }
        return ans;
    } 

};


//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends

//Longest K unique characters substring
//Problem: 03
//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int n = s.size();
        int i=0,j=0,fq[26]={0},unq=0,ans=-1;
        while(j<n)
        {
            fq[s[j]-'a']++;
            
            if(fq[s[j]-'a']==1)unq++;
            
            while(unq>k)
            {
                fq[s[i]-'a']--;
                if(fq[s[i]-'a']==0)unq--;
                i++;
            }
            
            if(unq==k)ans=max(ans,j-i+1);
            
            j++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends

//Problem: 04 
//Longest Distinct characters in string


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    int n=s.size(),mx=-1,unq=0,fq[26]={0},i=0,j=0;
    while(j<n)
    {
        fq[s[j]-'a']++;
        
        if(fq[s[j]-'a']==1)unq++;
        
        while(fq[s[j]-'a']>1)
        {
            fq[s[i]-'a']--;
            if(fq[s[i]-'a']==0)unq--;
            i++;
        }
        mx=max(mx,j-i+1); //mx=max(mx,unq);
        j++;
    }
    return mx;
}