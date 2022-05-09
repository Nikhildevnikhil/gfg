// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string convertToRoman(int n) {
        string roman = "";
        while(n >= 1000){
            roman += "M";
            n -= 1000;
        }
        if(n >= 900){
            roman += "CM";
            n -= 900;
        }
        while(n >= 500){
            roman += "D";
            n -= 500;
        }
        if(n >= 400){
            roman += "CD";
            n -= 400;
        }
        while(n >= 100){
            roman += "C";
            n -= 100;
        }
        if(n >= 90){
            roman += "XC";
            n -= 90;
        }
        while(n >= 50){
            roman += "L";
            n -= 50;
        }
        if(n >= 40){
            roman += "XL";
            n -= 40;
        }
        while(n >= 10){
            roman += "X";
            n -= 10;
        }
        if(n >= 9){
            roman += "IX";
            n -= 9;
        }
        while(n >= 5){
            roman += "V";
            n -= 5;
        }
        if(n == 4){
            roman += "IV";
            n -= 4;
        }
        while(n >= 1){
            roman += "I";
            n -= 1;
        }
        return roman;
    }
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		Solution ob;
    	cout << ob.convertToRoman(N) << endl;
	}
	return 0;
}  // } Driver Code Ends
