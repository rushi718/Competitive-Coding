#include<bits/stdc++.h>
using namespace std;
#define ll long long    
#define fo(i,j,n) for(int i=(j);i<((int)n);++i)
const int mod = 1e9 + 7;
const int N = 1e3 + 5;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef unordered_map<ll,ll> uo;

uo dp;

ll f(ll n)
{   
    
    if(n<=2)
    { 
        dp[n]=n;
        return dp[n];
    }
    if(dp[n]!=0) return dp[n];
        
    dp[n]= max(n,f(n/2)+f(n/3)+f(n/4));
    return dp[n];
}

void solve()
{   ll n;
    while(cin>>n)
    { 
        cout<<f(n)<<endl;
    }
}
int main()
{   ll t;
    //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}








