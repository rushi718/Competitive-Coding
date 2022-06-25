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
    ll n;
    string s;
    cin>>n;
    cin>>s;
    fo(i,0,n)
    {
        if(s[i]=='A')
            s[i]='T';
        else if(s[i]=='T')
            s[i]='A';
        else if(s[i]=='C')
            s[i]='G';
        else if(s[i]=='G')
            s[i]='C';
    }
    for(auto i:s)
        cout<<i;
    cout<<endl;
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








