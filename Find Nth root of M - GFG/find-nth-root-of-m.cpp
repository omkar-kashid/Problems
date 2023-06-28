//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	long long mul(int j, int n){
	    long long mul=1;
	    for(int i=1; i<=n; i++){
	        mul *= j;
	    }
	    return mul;
	    
	}
	int NthRoot(int n, int m)
	{
	    // Code here.
	    long long check;
	    for(int i=1; i<=m; i++){
	        if(mul(i,n)==m){
	            return i;
	        }
	        else if(mul(i,n)>m) 
	            break;
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