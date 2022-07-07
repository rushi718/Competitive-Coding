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

int gcd1(int a, int b)
{
    return b == 0 ? a : gcd1(b, a % b);   
}
void solve()
{
    ll n;
    cin>>n;
    vl v1(n),v;
    for(int i=0;i<n;i++) cin>>v1[i];

    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[v1[i]]=i+1;
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->first !=it->second)
        v.push_back(abs(it->first-it->second));
    }
    int gcd=0;
    for(int i=0;i<v.size();i++)
    {
        gcd= gcd1(gcd,v[i]);
    }
    cout<<gcd<<endl;
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








