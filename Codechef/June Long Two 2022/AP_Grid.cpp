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
    ll n,m;
    cin>>n>>m;
    ll a=1,d,t;
    if(n>=m)
    {
        d=1+m;
        t=1;
    }
    else
    {
        d=1;
        t=1+n;
    }
    for(int i=1;i<=n;i++)
    {
        ll k;
        k=a;
        for(int j=1;j<=m;j++)
        {   
            cout<<k<<" ";
            k+=d;
        }
        cout<<endl;
        d+=1;
        a+=t;
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








