#include<bits/stdc++.h>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    while(n--){
    int x,y;
    cin>>x>>y;

    if(x>y){
        cout<<"SECOND"<<endl;
    }else if(x<y){
        cout<<"FIRST"<<endl;
    }else{
        cout<<"ANY"<<endl;
    }
    
    }
	return 0;
}