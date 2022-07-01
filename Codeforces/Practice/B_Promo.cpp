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
    ll n,q;
    cin>>n>>q;
    vl v1(n),v2;
    fo(i,0,n) cin>>v1[i];
    sort(v1.begin(),v1.end(),greater<int>());
    v2.push_back(0);
    ll sum=0;
    for(int j=0;j<n;j++)
    {   
        sum+=v1[j];
        v2.push_back(sum);
        
    }
    fo(i,0,q) 
    {   
        ll x,y;
        cin>>x>>y;
        cout<<v2[x]-v2[x-y]<<endl;
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








