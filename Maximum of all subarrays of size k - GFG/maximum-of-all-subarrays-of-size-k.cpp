//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
    vector<int> ans;
    map<int, int, greater<int>> mp;
    for (int j = 0; j < k; j++) {
        mp[arr[j]]++;
    }
    ans.push_back(mp.begin()->first);
    int i=0;
    for (int j = k; j < n; j++) {
        mp[arr[i]]--;
        if (mp[arr[i]] == 0) {
            mp.erase(arr[i]);
        }
        i++;
        mp[arr[j]]++;
        ans.push_back(mp.begin()->first);
    }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends