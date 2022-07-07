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
    cin>>n>>x;

    if(n%2==0 and x%2==0) cout<<"YES"<<endl;
    else if(n%2==1 and x%2==0) cout<<"NO"<<endl;
    else
    {
        if(x<n) cout<<"YES"<<endl;
        else cout<<"NO";
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








