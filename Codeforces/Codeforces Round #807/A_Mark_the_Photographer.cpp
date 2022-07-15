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
    ll n,x;
    cin>>n>>x;
    vl v1(2*n);
    for(ll i=0;i<2*n;i++) cin>>v1[i];
    ll ok=1,i=n-1,j=2*n-1;
    sortv(v1);
    while(i>=0)
    {
        if(v1[j]-v1[i]<x)
        {
            ok=0;
            break;
        }
        i--;
        j--;
    }
    if(ok) cout<<"YES"<<endl;
    else   cout<<"NO"<<endl;
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








