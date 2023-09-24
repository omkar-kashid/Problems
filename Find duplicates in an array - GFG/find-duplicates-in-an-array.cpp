//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        int temp[n]={0};
        set<int> ans;
        for(int i=0; i<n; i++){
            if(temp[arr[i]]==1) ans.insert(arr[i]);
            temp[arr[i]]=1;
        }
        vector<int> res(ans.begin(),ans.end());
        if(!ans.size())
        res.push_back(-1);
        return res;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends