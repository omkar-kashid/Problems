//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the nth catalan number.
    int findCatalan(int n) 
    {
        //code here
        int mod = 1e9+7;
        int c[n];
        c[0]=c[1]=1;
        for(int i=2; i<=n; i++){
            c[i]=0;
            for(int j = 0; j<i; j++){
                c[i] = (c[i] + (1LL*c[j]*c[i-j-1])%mod)%mod;
            }
        }
        return c[n];
    }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends