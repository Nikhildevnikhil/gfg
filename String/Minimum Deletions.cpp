// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int t[1001][1001];
    
    int minimumNumberOfDeletions(string S) {
        string S1 = S;
        reverse(S1.begin(), S1.end());
        memset(t,-1,sizeof(t));
        int length = LCS(S,S1,S.size(),S1.size());
        int ans = S.size() - length;
        
    
        return ans;   
    }
    
    int LCS(string S1 , string S2 , int n , int m){
            if(n == 0 || m == 0){
                return 0;
            }
            if(t[n][m] != -1){
                return t[n][m];
            }
            if(S1[n - 1] == S2[m - 1])
                return t[n][m] = 1 + LCS(S1,S2,n-1,m-1);
            else{
                return t[n][m] = max(LCS(S1,S2,n-1,m),LCS(S1,S2,n,m-1));
            }
    }   
};
      

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}  // } Driver Code Ends
