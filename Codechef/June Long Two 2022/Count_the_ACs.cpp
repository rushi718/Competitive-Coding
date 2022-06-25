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
    cin>>n;
    bool s=false;
    for(int x=0;x<=10;x++)
    {
        for(int y=0;y<=10;y++)
        {
            if(x+y<=10 and (x+100*y)==n)
            {     
                cout<< x+y<<endl;
                s=true;
                break;
            }
        }
    }
    if(s==false)
    cout<<-1<<endl;
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








