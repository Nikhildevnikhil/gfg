// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
       int low = 0 ;
       int high = n - 1;
       int ans = arr[0];
       int mid;
       while(low <= high){
          if(arr[low] < arr[high]){
               ans = min(ans,arr[low]);
               break;
          }
          mid = low + (high - low) / 2;
          ans = min(ans,arr[mid]);
          if(arr[mid] >= arr[low]){
               low = mid + 1;
          }
          else{
              high = mid - 1;
          }
       }
       return ans;
    }
};

// { Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}  // } Driver Code Ends
