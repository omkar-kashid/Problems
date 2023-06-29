//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        unordered_map<int,int> mp;
        int i =0,A=0,B=0;
        for(i=0;i<n;i++){
            mp[arr[i]]++;
            
        }
        for(i=1;i<=n;i++){
            if(mp[i]==0){
                A=i;
            }
            if(mp[i]==2){
                B = i;
            }
        }
        return {B,A};
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends