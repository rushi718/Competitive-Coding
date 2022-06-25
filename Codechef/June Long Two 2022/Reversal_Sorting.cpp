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
    bool ok=true;
    cin>>n>>x;
    fo(i,0,n)
    {   ll a;
        cin>>a;
        v1.push_back(a);
    }

    for(ll i=0;i<n-1;i++)
    {
        if(v1[i]>v1[i+1] )
        {   
            if((v1[i]+v1[i+1])>x)
            {   ok=false;
                break;
            }
            else
            {
                swap(v1[i],v1[i+1]);
            }
        }
    }

    if(ok==true)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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








