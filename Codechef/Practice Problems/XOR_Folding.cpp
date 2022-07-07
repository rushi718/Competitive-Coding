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
    ll n,m,ans=0;
    cin>>n>>m;
    string s;
    for(ll i=0;i<n;i++)
    {   cin>>s;
        for(ll j=0;j<m;j++)
        {
            
            if(s[j]=='1')
            ans+=1;
        }
    }

    if(ans&1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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








