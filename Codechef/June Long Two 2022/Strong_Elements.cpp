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


void FillPrefixSuffix(vl & prefix, vl & arr, vl & suffix, int n)
{
    prefix[0] = arr[0];
    for (int i=1 ;i<n; i++)
        prefix[i] = __gcd(prefix[i-1], arr[i]);
    suffix[n-1] = arr[n-1];

    for (int i=n-2; i>=0 ;i--)
        suffix[i] = __gcd(suffix[i+1], arr[i]);

    
}


int GCDoutsideRange(int l, int r, vl & prefix,vl & suffix, int n)
{

    if (l==0)
        return suffix[r+1];
    if (r==n-1)
        return prefix[l-1];
    return __gcd(prefix[l-1], suffix[r+1]);
}




void solve()
{
    ll n,ans=0;
    vl v1;
    cin>>n;
    vl prefix(n),suffix(n);
    fo(i,0,n)
    {   ll a;
        cin>>a;
        v1.push_back(a);
    }
    FillPrefixSuffix(prefix,v1,suffix,n);
    for(ll i=0;i<n;i++)
    {
        if((GCDoutsideRange(i,i,prefix,suffix,n))>1)
        ans+=1;
    }
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








