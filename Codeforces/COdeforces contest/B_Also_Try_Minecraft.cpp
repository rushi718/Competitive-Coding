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

void printvector(vl v)
{
    for(auto i:v) cout<<i<<" ";
    cout<<endl;
}
void solve()
{
    ll n,m;
    cin>>n>>m;
    vl v1(n);
    for(ll i=0;i<n;i++) cin>>v1[i];
    vl v2(n-1),v3(n);
    vl v4(n-1),v5(n);
    v2.push_back(0);
    for(ll i=1;i<n;i++) 
    {
        if(v1[i]<v1[i-1]) 
        v2[i]=v1[i-1]-v1[i];
        else
        v2[i]=0;
    }
    
    ll s=0;
    for(ll i=0;i<n;i++)
    {
        s+=v2[i];
        v3[i]=s;
    }
    v4.push_back(0);
    for(ll i=n-1;i>0;i--) 
    {
        if(v1[i]>v1[i-1]) 
        v4[n-i]=v1[i]-v1[i-1];
        else
        v4[n-i]=0;
    }
    
    ll t=0;
    for(ll i=0;i<n;i++)
    {
        t+=v4[i];
        v5[i]=t;
    }
    
    for(ll i=0;i<m;i++)
    {
        ll s,j;
        cin>>s>>j;

        if(s<j)
        cout<<v3[j-1]-v3[s-1]<<endl;
        else if(s>j)
        
        {
            ll p=n-j,q=n-s;
            cout<<v5[p]-v5[q]<<endl;
        }
        else
        cout<<0<<endl;
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








