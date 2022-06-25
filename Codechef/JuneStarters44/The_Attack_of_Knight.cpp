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
{   int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    vector<vector <int>> v1,v2;
    int dx1[8]={2,2,-2,-2,1,1,-1,-1};
    int dx2[8]={1,-1,1,-1,2,-2,2,-2};

    fo(i,0,8)
    {
        int x=x1+dx1[i];
        int y=y1+dx2[i];
        if(x>=1 && x<=8 && y>=1 && y<=8)
        v1.push_back({x,y});
    }
    
    
        
    fo(i,0,8)
    {
        int x=x2+dx1[i];
        int y=y2+dx2[i];
        if(x>=1 && x<=8 && y>=1 && y<=8)
        v2.push_back({x,y});
    }

    bool t=false;
    for(auto i:v1)
    {
        for(auto j:v2)
        {
            if(i==j)
            {
                t=true;
                break;
            }
        }
    }
    if(t)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

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








