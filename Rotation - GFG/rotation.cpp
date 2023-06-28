//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int i=0, j=n-1;
	    int mini = INT_MAX;
	    int minIndex = 0;
	    while(i<=j){
	        int mid = (i+j)/2;
	        if(arr[i]<=arr[mid]){
	            if(arr[i]<= mini){
	                mini = arr[i];
	                minIndex = i;
	            }
	            i = mid + 1;
	        }
	        else{
	            if(arr[mid]<mini){
	                mini = arr[mid];
	                minIndex = mid;
	            }
	            j = mid -1;
	        }
	    }
	    return minIndex;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends