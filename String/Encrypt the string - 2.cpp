// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    string encryptString(string S) {
        int count = 1;
        string res = "";
        for(int i = 0 ; i < S.size() ; i++){
            if(S[i] == S[i+1]){
                count++;
            }
            else{
                res.push_back(S[i]);
                int temp = count;
                int r;
                while(temp != 0){
                    r = temp % 16;
                    if(r < 10){
                        res.push_back(48+r);
                    }
                    else{
                        res.push_back(87+r);
                    }
                    temp = temp / 16;
                    count = 1;
                }
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;

        Solution ob;
        cout<<ob.encryptString(S)<<endl;
    }
    return 0;
}  // } Driver Code Ends
