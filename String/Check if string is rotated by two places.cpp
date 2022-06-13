// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        string s1 = str2.substr(str2.length()-2,str2.length());
        string s2 = str2.substr(0,str2.length()-2);
        string s3 = s1 + s2;
        if(s3 == str1){
            return true;
        }
        s1 = str2.substr(2,str2.length());
        s2 = str2.substr(0,2);
        s3 = s1 + s2;
        if(s3 == str1){
            return true;
        }
        return false;
    }

};


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
  // } Driver Code Ends
