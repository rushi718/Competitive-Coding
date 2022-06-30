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
    vl coins(n);
    for(int i=0;i<n;i++)
    {
        cin>>coins[i];
    }
    vl dp(x+1,0);
    dp[0]=1;
    fo(i,1,x+1)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=coins[j])
            {
                dp[i]=(dp[i] + dp[i-coins[j]])%mod;
            }
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








