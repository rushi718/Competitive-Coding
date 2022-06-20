#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pow2(n) round(pow(2,n))
#define mod 1000000007


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
void solve()
{   
    ll n;
    cin>>n;
    ll ans= modpow(2,n,mod);
    cout<< ans<<endl;

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