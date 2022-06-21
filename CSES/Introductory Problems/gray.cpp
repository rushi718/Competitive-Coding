// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    string retbinary(int decimal) {
    int binary = 0, remainder, product = 1;
    while (decimal != 0) {
    remainder = decimal % 2;
    binary = binary + (remainder * product);
    decimal = decimal / 2;
    product *= 10;
  }
  
  return to_string(binary);
}

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}
 
    int getGray(int n) {
        // code here
        if(n==0)
        return 0;
        else if(n==1)
        return 1;
        else{
        
        string s=retbinary(n);
        cout<<s<<endl;
        string x;
        x=x+s[0];
        for(int i=1;i<s.size()-1;i++)
        {
            if(s[i]!=s[i+1])
            x+="1";
            else
            x+="0";
        }
        int p=s.size();
        if(s[p-1]!=s[p-2])
        x+="1";
        else
        x+="0";
        cout<<x<<endl;
        return binaryToDecimal(stoi(x));
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.getGray(n) << endl;
    }
    return 0;
}  // } Driver Code Ends