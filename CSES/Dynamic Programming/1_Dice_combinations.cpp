#define ll long long
#define mod 1000000007
#include<bits/stdc++.h>
using namespace std;
int main()
{   ll n;
    cin >>n;
    ll dp[n+1];
    for(int i=0;i<n+1;i++) dp[i]=0;
    dp[0]=dp[1]=1;
    ll i=2;
    
    while(i<n+1)
    {   ll j=1;
        while(j<7 && (i-j)>=0)
        {
            dp[i]+=dp[i-j];
            dp[i]=dp[i]%mod;
            j+=1;
        }
        i+=1;

    }
    cout<<dp[n];

    return 0;
}