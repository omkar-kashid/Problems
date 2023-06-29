//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    bool capacity(int arr[], int day, int cap, int n){
        int TotalDaysRequired = 1;
        int currentWeight = 0;
        
        for(int i=0; i<n; i++){
            if(currentWeight+arr[i] > cap){
                TotalDaysRequired++;
                currentWeight = 0;
            }
            currentWeight+=arr[i];
        }
        if(TotalDaysRequired>day) return false;
        return true;
    }
    int leastWeightCapacity(int arr[], int N, int D) {
        // code here
        int maxi = INT_MIN;
        long long sum = 0;
        for(int i=0; i<N; i++){
            maxi = max(maxi,arr[i]);
            sum += arr[i];
        }
        for(int i=maxi; i<=sum; i++){
            if(capacity(arr,D,i, N)){
                return i;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends