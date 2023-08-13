//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int mod = 1e9+7;
    int nthFibonacci(int n){
        if(n==1 || n==2) return 1;
        int first = 1;
        int second = 1;
        int ans=1;
        for(int i=3; i<=n; i++){
            ans = first + second;
            first = second%mod;
            second = ans%mod;
        }
        return ans%mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends