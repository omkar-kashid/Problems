//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	//return 1 if == m
	// return 0 if <m
	// return 2 if > m
	long long mul(int mid, int n, int m){
	    long long mul=1;
	    for(int i=1; i<=n; i++){
	        mul *= mid;
	        if(mul>m) return 2;
	    }
	    if(mul == m) return 1;
	    return 0;
	}
	int NthRoot(int n, int m)
	{
	    // Code here.
	    int i = 1, j = m;
	    while(i<=j){
	        int mid = (i+j)/2;
	        if(mul(mid,n,m)==1){
	            return mid;
	        }
	        else if(mul(mid,n,m)==2){
	            j = mid -1;
	        }
	        else{
	            i = mid + 1;
	        }
	    }
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends