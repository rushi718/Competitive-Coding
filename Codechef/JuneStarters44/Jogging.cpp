#include<bits/stdc++.h>
using namespace std;
#define ll long long    
#define fo(i,j,n) for(int i=(j);i<((int)n);++i)
#define mod 1000000007
const int N = 1e3 + 5;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;


ll modpow(ll a, ll b, ll n){
    long long x=1, y=a; 
    while (b > 0) {
        if (b%2 == 1) {
            x = (x*y) % n; // multiplying with base
        }
        y = (y*y) % n; // squaring the base
        b /= 2;
    }
    return x % n;
}



void solve()
{ 
   ll n,x;
    cin>>n>>x;
    if(n==1)
    {cout<<x<<endl;}
    else{
    cout<<x*modpow(2,n-1,mod)<<endl;
   
}}
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








