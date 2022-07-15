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
#define maxv(v) *max_element(v.begin(), v.end())
#define minv(v) *min_element(v.begin(), v.end())
#define sortv(v) sort(v.begin(), v.end())

void solve()
{
    ll n,ans=0;
    cin>>n;
    vl v1(n);
    for(ll i=0;i<n;i++) cin>>v1[i];
    for(ll i=0;i<n-1;i++)
    {
        if(v1[i]>1) ans=ans+v1[i]-1;
    }
    ll k=0;
    for(ll i=0;i<n-1;i++)
    {
        if(v1[i]==0) k+=1;
        else break;
    }
    ans=ans+n-1-k;
    cout<<ans<<endl;
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








