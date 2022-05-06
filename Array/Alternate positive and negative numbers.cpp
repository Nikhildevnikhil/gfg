// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    int p_arr[n],n_arr[n],i,p_index,n_index;
	    i = p_index = n_index = 0;
	    for(int i = 0 ; i < n ; i++){
	        if(arr[i] >= 0){
	            p_arr[p_index++] = arr[i];
	        }
	        else{
	            n_arr[n_index++] = arr[i];
	        }
	    }
	    int i_count , p_count , n_count;
	    i_count = p_count = n_count = 0;
	    while(p_count < p_index && n_count < n_index){
	        if(i_count % 2 == 0){
	            arr[i_count++] = p_arr[p_count++];
	        }
	        else{
	            arr[i_count++] = n_arr[n_count++];
	        }
	    }
	    while(p_count < p_index){
	        arr[i_count++] = p_arr[p_count++];
	    }
	    while(n_count < n_index){
	        arr[i_count++] = n_arr[n_count++];
	    }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
