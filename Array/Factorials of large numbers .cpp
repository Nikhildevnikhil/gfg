// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    void multiply(vector<int> &v , int i){
        int carry = 0 , product;
        for(int j = 0 ; j < v.size() ;j++){
            product = v[j] * i + carry;
            v[j] = product % 10;
            carry = product / 10;
        }
        while(carry != 0){
            v.push_back(carry % 10);
            carry = carry / 10;
            
        }
    }
    vector<int> factorial(int N){
        vector<int> v;
        v.push_back(1);
        for(int i = 2 ; i <= N ; i++){
            multiply(v,i);
            
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
