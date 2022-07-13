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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int> mp(0);
    ll ans=0;
    for(auto i:s)
    {
        mp[i]+=1;
        if(mp[i]>1)
        ans+=1;
        else
        ans+=2;
    }
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








