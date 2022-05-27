// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

// 

class Solution{
  public:
    int isdivisible7(string num){
        int p = 1; long sum = 0;
        int n = num.size();
        if (n == 0)
            return 1;
        if (n % 3 == 1) {
            num = "00" + num;
            n = n + 2;
        } else if (n % 3 == 2) {
            num = "0" + num;
            n = n + 1;
        }
        
      for(int i = n - 1; i >= 0 ; i--){
        int threeDigits = 0;
        threeDigits += num[i--] - '0';
        threeDigits += (num[i--] - '0') * 10;
        threeDigits += (num[i] - '0') * 100;
    
        threeDigits = threeDigits * p;
        
        sum = sum + threeDigits;
        
        p = p * -1;
      }
      return sum%7 == 0 ? 1:0;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isdivisible7(s) << endl;
    }
    return 0;
}  // } Driver Code Ends
