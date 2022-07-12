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

void solve()
{
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    if((abs(x1-x2)%2==0 and abs(y1-y2)%2==0) or (abs(x1-x2)%2==1 and abs(y1-y2)%2==1))
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








