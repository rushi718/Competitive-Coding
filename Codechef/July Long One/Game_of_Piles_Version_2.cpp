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
    ll n;
    cin>>n;
    vl v1(n);
    ll b=0,c=0,d=0,e=0,f=0;
    for(ll i=0;i<n;i++) 
    { 
        cin>>v1[i];
        if(v1[i]==1)
        d+=1; 
        else 
        {
            if(v1[i]==2)
            c+=1;
            e+=v1[i];
            f+=1;
            if(v1[i]%2!=0)
            b+=1;
        } 
    }
    if(d==1)
    {
        if(b%2==0)
        {
            cout<<"CHEF"<<endl;
            return;
        }
        if(c==0)
        {
            cout<<"CHEFINA"<<endl;
            return;
        }
        e=e-2;
        f-=1;
        if((e-f)%2!=0)
        {
            cout<<"CHEFINA"<<endl;
            return;
        }
        else
        {
            cout<<"CHEF"<<endl;
            return;
        }
    }
    else if(d>1)
    {
        if((e-f)%2!=0)
        {
            cout<<"CHEF"<<endl;
            return;
        }
        else
        {
            cout<<"CHEFINA"<<endl;
            return;
        }
    }
    if(b%2!=0)
    {
        cout<<"CHEF"<<endl;
        return;
    }
    else
    {
        cout<<"CHEFINA"<<endl;
        return;
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








