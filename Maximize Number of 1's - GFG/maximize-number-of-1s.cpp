//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // code here
         int  i = 0, j, count = 0, ans = 0;
        for(j = 0; j < n; j++){
            if(arr[j] == 0) count++;
            if(count > m){
                if(arr[i] == 0) count--;
                i++;
            }
            ans = max(ans, j - i + 1);
        }
        return ans;
        
        
    }  
    // i0 1 2 3
    // j0 1 2 3 4 5 6 7 8 9 10
    // ans0 1 2 3 4 5 6 7 8
    // count 0 1 2 3 2 3 2 3 2
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends