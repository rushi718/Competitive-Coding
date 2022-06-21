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
bool isint(float a)            
{                          
if(a==int(a)) return true;
else return false;           
}                        

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
    ll a,b;
    cin>>a>>b;
    if(a>b) swap(a,b);
    if(2*a<b) cout<<"NO"<<endl;
    else
    {
        a%=3;
        b%=3;
        if(a>b) swap(a,b);
        if((a==0 && b==0 ) || (a==1 && b==2))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
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








