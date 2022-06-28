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
    ll x,y;
    cin>>x>>y;
    if(x>y)
    {   ll d=x-y;
        if(d%2==1)
        {
            cout<<(d+1)/2+1<<endl;
        }
        else
        cout<<d/2<<endl;
    }
    else if(y>x)
    cout<<y-x<<endl;
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








