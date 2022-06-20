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
    ll n,c2=0,c5=0,temp;
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        temp=temp/2;
        c2+=temp;
    }
    temp=n;
    while(temp!=0)
    {
        temp=temp/5;
        c5+=temp;
    }

    if(c5<c2) cout<<c5;
    else      cout<<c2;


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








