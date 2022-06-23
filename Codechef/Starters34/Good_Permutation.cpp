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
{   ll n;
    cin>>n;
    if(n%2==0)
    {
        while(n!=0)
      {     cout<<n<<" ";
            n-=1;
      }
        
    }

    else

    { if(n==1 or n==3)
        cout<<-1;
       
       else{
        cout<<"2 5 1 3 4 ";
        while(n!=5)
        {
            cout<<n<<" ";
            n-=1;
        }
       }

}
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








