//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        int right[n]; // max j
        int left[n];  // min i
        left[0] = arr[0];
        right[n-1] = arr[n-1];
        for(int i=1; i<n; i++){
            left[i] = min(left[i-1], arr[i]);
        }
        for(int i=n-2; i>=0; i--){
            right[i] = max(right[i+1], arr[i]);
        }
        int i=0, j=0, ans = 0;
        while(i<n && j<n){
            if(left[i]<=right[j]){
                ans = max(ans, j-i);
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
    
    // left 34 8 8 3 2 2 2 2 1
    // right 80 80 80 80 80 80 33 33 1

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
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends