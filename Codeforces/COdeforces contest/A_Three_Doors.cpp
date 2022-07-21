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
    ll x;
    cin>>x;
    vl v1(3);
    for(ll i=0;i<3;i++) cin>>v1[i];
    if(v1[x-1]==0) cout<<"NO"<<endl;
    else
    {
        if(v1[v1[x-1]-1]==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
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








