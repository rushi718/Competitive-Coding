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
    ll n,m,k,ans=0;
    cin>>n>>m>>k;
    vl v1,v2;
    for(ll i=0;i<n;i++)
    {   
        ll a;
        cin>>a;
        v1.push_back(a);
    }
    for(ll i=0;i<m;i++)
    {   
        ll a;
        cin>>a;
        v2.push_back(a);
    }
    
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    
    ll i=0,j=0;
    while (i < n && j < m){
		if (abs(v1[i] - v2[j]) <= k){
			++i; ++j;
			++ans;
		}
		else{
	
			if (v1[i] - v2[j] > k){
				++j;
			}
			else{
				++i;
			}
		}
	}
	cout << ans << "\n";


    
}
int main()
{   ll t;
    //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}








