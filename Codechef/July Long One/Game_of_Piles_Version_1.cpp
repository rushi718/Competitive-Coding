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
#define maxv(v) *max_element(v.begin(), v.end())
#define minv(v) *min_element(v.begin(), v.end())
#define sortv(v) sort(v.begin(), v.end())

void solve()
{
    ll n,c=0;
    cin>>n;
    vl v1(n);
    bool t=false;
    for(int i=0;i<n;i++) cin>>v1[i];
    
    for(auto i:v1)
    {
        if(i==1)
            {
                t=true;
                break;
            }
        else if(i%2==1)
        c+=1;
    

    }
    if(t)cout<<"CHEF"<<endl;
    else{
    if(c%2==0)
    cout<<"CHEFINA"<<endl;
    else
    cout<<"CHEF"<<endl;
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








