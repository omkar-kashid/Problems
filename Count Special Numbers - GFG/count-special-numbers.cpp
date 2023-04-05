//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int N, vector<int> arr) {
        int mx = *max_element(arr.begin(),arr.end());
        int special[mx+1];
        memset(special,0,sizeof(special));
        for(int i=0;i<N;i++){
            if(special[arr[i]]<2){
                for(int j=arr[i];j<=mx;j+=arr[i])special[j]++;
            }
        }
        int ans=0;
        for(auto x:arr)if(special[x]>1)ans++;
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends