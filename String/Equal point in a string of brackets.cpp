// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int findIndex(string str) {
        int open = 0 , close = 0;
    //   for(int i = 0 ; i < str.length() ; i++){
    //       if(str[i] == ')'){
    //           close++;
    //       }
    //   }
       close = count(str.begin(),str.end(),')');
       int i;
       for( i = 0 ; i < str.length() ; i++){
           if(open == close){
               return i;
           }
           if(str[i] == '('){
               open++;
           }
           else{
               close--;
           }
       }
       return i;
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
		cout<<ob.findIndex(s)<<endl;
	}
}  // } Driver Code Ends
