#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{   ll n;
    cin>>n;
    for(ll i = 1; i < n+1; i++)
    {
        if(i==1)
            cout<<0<<endl;
        else
        {
            ll k1=i*i;
            cout<< (k1*(k1-1))/2 - 4*(i-1)*(i-2)<<endl;
        }
    }
    return 0;
}
