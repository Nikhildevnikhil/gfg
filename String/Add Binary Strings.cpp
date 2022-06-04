// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string A, string B)
	{
	    int i = A.size()-1, j = B.size()-1;
	    int sum,carry = 0;
	    string result;
	    while(i >= 0 || j >= 0){
	        sum = carry;
	        if(i >= 0) sum += A[i--] - '0';
	        if(j >= 0) sum += B[j--] - '0';
	        result += to_string(sum % 2);
	        carry = sum / 2;
	    }
	    if(carry != 0) result += '1';
	    reverse(result.begin(),result.end());
	    string ans = result;
	    while(ans[0] == '0') ans.erase(ans.begin());
	    return ans;
	}
};

// { Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
