#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >>t;
    while(t--)
    {
        ll x,y;
        cin >>x>>y;
        if(y>x)
        {
            if(y%2==1)
                cout <<y*y-x+1<<endl;
            else
            {
                y--;
                cout<<y*y+x<<endl;
            }

        
        }
        else
        {
            if(x%2==0)
            {
                cout<<x*x-y+1<<endl;
            }
            else
            {
                x--;
                cout<<x*x+y<<endl;
            }
        }
    
    }   
    return 0;
}
