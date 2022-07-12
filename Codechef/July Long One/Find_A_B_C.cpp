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
ll highestPowerof2(ll n)
{
    ll res=0;
    for(ll i=n;i>=1;i--)
    {
        if((i&(i-1))==0)
        {
            res=i;
            break;
        }
    }
    return res;
}
void solve()
{
    ll n;
    cin>>n;
    vl v1(n+1);
    ll ans[3]={0,0,0};
    for(ll i=0;i<=n;i++)
    {
        cin>>v1[i];
    }

    for(ll i=highestPowerof2(n);i>0;i/=2)
    {
        ll diff=v1[i]-v1[0];
        if(diff<0)
        {
            diff*=-1;
            ll ct=diff/i;
            if(ct==1)
            {
                ct=2;
                if((ans[0]^i)<=n)
                {
                    ans[0]^=i;
                    ct--;
                }
                if(ct && (ans[1]^i)<=n)
                {
                    ans[1]^=i;
                    ct--;
                }
                if(ct>0 && (ans[2]^i)<=n)
                ans[2]^=i;
            }
            else if(ct==3)
            {
                ans[0]^=i;
                ans[1]^=i;
                ans[2]^=i;
            }
        }
        else
        {
            ll ct=diff/i;
            if(ct==1)
            {
                if((ans[0]^i)<=n)
                    ans[0]^=i;
                else if((ans[1]^i)<=n)
                    ans[1]^=i;
                else
                    ans[2]^=i;
            }
        }
        sort(ans,ans+3);
    }
    
    cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
    
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








