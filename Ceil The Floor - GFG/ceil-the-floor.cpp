//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    int great = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>great)
        great = arr[i];
    }
    int floor=-1, ceil=great;
    bool fls = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>=x) fls = 1;
        if(arr[i]>floor && arr[i]<=x){
            floor = arr[i];
        }
        if(arr[i]<ceil && arr[i]>=x){
            ceil = arr[i];
        }
    }
    if(!fls) ceil = -1;
    return {floor,ceil};
}