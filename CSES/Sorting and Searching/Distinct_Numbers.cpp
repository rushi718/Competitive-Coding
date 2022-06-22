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
    ll n,no;
    vi num;
    cin>>n;
    fo(i,0,n)
    {    cin>>no;
        num.push_back(no);
    }
    
    set<ll> set1;
    for(auto i:num)
        set1.insert(i);
    
    cout<<set1.size()<<endl;
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








