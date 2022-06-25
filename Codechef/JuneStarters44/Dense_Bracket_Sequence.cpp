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
    string s;
    int n;
    cin>>n;
    cin>>s;
    int i=0,j=n-1,ans=0;

    while(i<=j)
    {
        if(s[i]=='(' && s[j]==')')
        {
            i++;
            j--;
        }
        else if(s[i]=='(' && s[j]=='(')
        {
            j--;
            ans++;
        }
        else if(s[i]==')' && s[j]==')')
        {
            i++;
            ans++;
        }
        else{
            i++;
            j--;
            ans+=2;
        }
    }
    cout<<ans<<endl;
    
    
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








