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
typedef vector<string> vs;

int modpow(int a, int b, int n){
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


vs gray_code(ll n)
{
    if(n==1)
    { 
        vs v1{"0","1"};
        return v1;
    }
    else
    {
        vs x=gray_code(n-1);
        vector<string> r(x.rbegin(), x.rend());
        fo(i,0,r.size())
            r[i]="1"+r[i];

        fo(i,0,x.size())
            x[i]="0"+x[i]; 

        for(auto i: r)
            x.push_back(i);
        
        return x;
    }

}

void solve()
{
    ll n;
    cin>>n;
    vs t=gray_code(n);
    for(auto i:t)
        cout<<i<<endl;
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








