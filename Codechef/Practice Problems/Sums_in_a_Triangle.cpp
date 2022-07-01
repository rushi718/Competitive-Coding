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
typedef vector<vector<ll>> vvl;
void solve()
{
    ll n;
    cin>>n;
    vvl v1;
    for(ll i=0;i<n;i++)
    {   vl v2;
        for(ll j=0; j<=i;j++)
        {
            ll a;
            cin>>a;
            v2.push_back(a);
        }
        v1.push_back(v2);
    }
    
    ll dp[n][n];

    for(int i=0;i<n;i++)
    {
        dp[n-1][i]=v1[n-1][i];
    }

    for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            dp[i][j]= v1[i][j] + max(dp[i+1][j],dp[i+1][j+1]);
        }
    }

    cout<<dp[0][0]<<endl;
}
int main()
{   ll t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}








