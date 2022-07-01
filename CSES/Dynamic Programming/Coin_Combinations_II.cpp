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

void solve()
{
    ll n,x;
    cin>>n>>x;
    vl coins(n),dp(x+1,0);
    fo(i,0,n) cin>>coins[i];
    dp[0]=1;
    for(auto j:coins)
    {
        fo(i,0,x+1)
        {   if(i>=j)
            dp[i]=(dp[i]+ dp[i-j])%mod;
        }
    }
    cout<<dp[x]<<endl;
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








