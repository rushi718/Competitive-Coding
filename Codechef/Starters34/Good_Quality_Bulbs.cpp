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
    vl v1;
    cin>>n>>x;
    fo(i,0,n-1)
    {   ll a;
        cin>>a;
        v1.push_back(a);
    }
    ll sum=0;
    for(auto i:v1)
    {
        sum+=i;
    }
    ll t=x*n-sum;
    if(t>=0)
    cout<<t<<endl;
    else
    cout<<0<<endl;
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








