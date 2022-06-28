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
    ll p1,p2,q1,q2;
    cin>>p1>>p2>>q1>>q2;

    ll p=max(p1,p2);
    ll q=max(q1,q2);
    
    if(p>q)
    cout<<"Q"<<endl;
    else if(q>p)
    cout<<"P"<<endl;
    else 
    {
    cout<<"TIE"<<endl;
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








