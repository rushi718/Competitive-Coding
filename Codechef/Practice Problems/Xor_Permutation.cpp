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
    vl v1{10,9,8,7,6,5,1,2,4,3};
    if(n==3)
    cout<<-1<<endl;
    else if(n<=10)
    {
        for(int i=10-n;i<10;i++)
        cout<<v1[i]<<" ";
        cout<<endl;
    }
    else
    {
        for(int i=11;i<n+1;i++)
        v1.push_back(i);

        for(auto i:v1)
        cout<<i<<" ";
        cout<<endl;
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








