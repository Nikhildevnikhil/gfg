// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        int num = 0 , startIndex = 0 , factor = 1;
        if(str[0] == '-'){
            startIndex = 1;
            factor = -1;
        }
        for(int i = startIndex ; i < str.length() ; i++){
            if(str[i] >= '0' && str[i] <= '9'){
                num = num * 10 + str[i] - '0';
            }
            else{
                return -1;
            }
        }
        return num * factor;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends
