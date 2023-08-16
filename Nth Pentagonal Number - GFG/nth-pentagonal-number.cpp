//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long getNthPentagonalNum(long long n) {
        // code here
        if(n==1) return n;
        n = n-1;
        long long sum = (n*(8+(n-1)*3))/2;
        return sum+1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        
        cin>>n;

        Solution ob;
        cout << ob.getNthPentagonalNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends