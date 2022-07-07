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
    ll n;
    cin>>n;
    vl v1(n);
    fo(i,0,n) cin>>v1[i];
    ll sum=0;
    for(ll i=0;i<n-1;i++)
    {  ll c=v1[i]+v1[i+1];
        if(c>sum)
            sum=c;
    }
    ll c=v1[0]+v1[n-1];
    if(c>sum)
    sum=c;
    cout<<sum<<endl;
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








