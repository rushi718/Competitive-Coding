#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<ll> vl;
#define PB push_back


void solve()
{
    ll n; cin >> n;
    ll sum = n * (n + 1) / 2;
    if (sum % 2) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    sum /= 2;
    vector<int> s1, s2;
    for (int i = n; i > 0; i--) {
        if (sum >= i) {
            sum -= i;
            s1.push_back(i);
        } else {
            s2.push_back(i);
        }
    }
    cout << s1.size() << "\n";
    for (int x : s1) cout << x << " ";
    cout << "\n";
    cout << s2.size() << "\n";
    for (int x : s2) cout << x << " ";
    cout << "\n";
    
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