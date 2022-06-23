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
    ll n;
    cin>>n;
    vl v1;
    fo(i,0,n)
    {   ll a;
        cin>>a;
        v1.push_back(a);
    }
    ll p=0,k=0;
    for(auto i:v1)
    {
        if(i>0)
        p+=1;
        else if(i<0)
        k+=1;
    }

    ll ans=p*(p-1)/2 + k*(k-1)/2;
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








