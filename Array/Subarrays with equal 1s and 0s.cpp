// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        long long int count = 0;
        unordered_map<int,int> m;
        m[0] = 1;
        int currentSum = 0, temp;
        for(int i = 0 ; i < n; i++){
            temp = (arr[i] == 0) ? -1 : 1;
            currentSum += temp;
            if(m.find(currentSum) != m.end()){
                count = count + m[currentSum]; 
                m[currentSum]++;
            }
            else{
                m[currentSum] = 1;
            }
        }
        return count;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}
  // } Driver Code Ends
