#include<bits/stdc++.h>
using namespace std;
#define ll long long    
#define fo(i,j,n) for(int i=(j);i<((int)n);++i)
#define F first
#define S second
#define PB push_back
const int mod = 1e9 + 7;
const int N = 1e3 + 5;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;


void solve()
{
    string s;
    cin>>s;
    unordered_map<char,ll> ump;

    set <char> set1;
    for (auto i : s)
        set1.insert(i);

    for(auto i:set1)
    ump[i]=0;
    fo(i,0,s.size())
    {
        ump[s[i]]+=1;
    }
    ll eve=0,od=0;
    for(auto i:ump)
    {
        if(i.S%2==0)
        eve+=1;
        else
        od+=1;
    }
    if(s.size()%2==0)
    {
        if(eve==set1.size())
        {   string g;
            for(auto m:ump)
            {   char t=m.F;
                fo(i,0,m.S/2)
                g+=t;
            }
            string rev = string(g.rbegin(), g.rend());
            g=g+rev;
            cout<<g<<endl;
        }
        else 
        cout<<"NO SOLUTION"<<endl;
    }
    else{
    
        if(eve==(set1.size()-1))
        {
            string g,k;
            char c;
            ll h;
            for(auto m:ump)
            {   if(m.S%2==0)
            {
                char t=m.F;
                fo(i,0,m.S/2)
                g+=t;
            }
            else
            {
                c=m.F;
                h=m.S;
                fo(i,0,h)
                k+=c;
            }
                
            }
            string rev = string(g.rbegin(), g.rend());
            g=g+k+rev;
            cout<<g<<endl;
        }
        else 
        cout<<"NO SOLUTION"<<endl;
    }
    
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








