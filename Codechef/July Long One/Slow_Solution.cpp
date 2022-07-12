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
    ll a,b,c,ans=0;
    cin>>a>>b>>c;
    if(a <= c/b)
    {
        cout<<a*b*b<<endl;
    }
    else
    {   ll x=c/b;
        ll t=c%b;
        ll n= x*b*b+t*t;
        cout<<n<<endl;
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








