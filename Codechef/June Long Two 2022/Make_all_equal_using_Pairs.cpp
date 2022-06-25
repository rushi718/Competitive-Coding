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
    ll c=1,maxc=1;
    vl v1;
    cin>>n;
    fo(i,0,n)
    {   ll a;
        cin>>a;
        v1.push_back(a);
    }

    sort(v1.begin(),v1.end());
    for(int i=0;i<n-1;i++)
    {
        if(v1[i]==v1[i+1])
            c+=1;
        else
            c=1;
        
        if(c>maxc)
            maxc=c;
    
    }
    cout<<n-maxc<<endl;

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







    

    
    
    
    

