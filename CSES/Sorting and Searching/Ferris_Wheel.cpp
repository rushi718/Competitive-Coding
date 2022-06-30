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
    vl v1,v2;
    for(ll i=0;i<n;i++)
    {   
        ll a;
        cin>>a;
        v1.push_back(a);
    }
    sort(v1.begin(),v1.end());
    ll ans=0;
    ll i=n-1,l=0;
    while(l<=i)
    {
        if(v1[l]+v1[i]<=x)
            l++;
        ans++;
        i--;
    }
    cout<<ans<<endl;


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








