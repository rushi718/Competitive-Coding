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
    fo(i,1,n/2+1)
    {
        cout<<x-i<<" ";
    }
    if(n%2==1)
    cout<<x<<" ";
    fo(i,1,n/2+1)
    {
        cout<<x+i<<" ";
    }
    cout<<endl;
}
int main()
{   ll t;
    cin>>t;
   // t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}








