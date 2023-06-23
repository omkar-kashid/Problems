//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    
	    int i=0, j=n-1, first = -1, last = -1;
	    while(i<=j){
	        int mid = (i+j)/2;
	        if(arr[mid]==x){
	            first = mid;
	            j = mid -1;
	        }
	        else if(arr[mid]>x){
	            j = mid - 1;
	        }
	        else{
	            i = mid + 1;
	        }
	    }
	    i = 0, j = n-1;
	    while(i<=j){
	        int mid = (i+j)/2;
	        if(arr[mid]==x){
	            last = mid;
	            i = mid + 1;
	        }
	        else if(arr[mid]>x){
	            j = mid -1;
	        }
	        else {
	            i = mid + 1;
	        }
	    }
	    if(first == -1) return 0;
	    return last - first + 1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends