
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, sum, s1, i, j, ai, aj;
    string a;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        
        cin>>a;
        
        sum=0;
        
        ai=aj=-1;
        
        for(i=0; i<n; i++)
        {
            if(a[i]=='0'){
                sum++;
            }else{
                sum--;
            }
        }
        
        s1=0;
        j=0;
        
        for(i=0; i<n; i++)
        {
            if(a[i]=='0'){
                s1++;
            }else{
                s1--;
            }
            
            if(2*s1==sum){
                ai=i+1;
                aj=j+1;
                break;
            }else if(sum>0 && s1<=0){
                s1=0;
                j=i+1;
            }else if(sum<0 && s1>=0){
                s1=0;
                j=i+1;
            }
        }
        
        if(ai==-1){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
            cout<<aj<<" "<<ai<<"\n";
        }
    }
}