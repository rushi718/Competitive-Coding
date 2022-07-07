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
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[n],h[100]={0},d=1;

    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        h[a[i]]++;
    }
    for(ll i=0;i<k;i++)
    {
        if(h[i]==0) 
        {
            d=0;
            break;
        }
    }
    ll avail=n-h[k];
    if(d==1 && avail>=m && k<=m)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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








