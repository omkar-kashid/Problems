//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool totalDiv(vector<int>&nums, int div, int K){
        int totalDivisors = 0;
        for(int i=0; i<nums.size(); i++){
            totalDivisors += ceil((double)nums[i]/(double)div);
            if(totalDivisors>K) return 0;
        }
        if(totalDivisors<=K) return 1;
    }
    int smallestDivisor(vector<int>& nums, int K) {
        if(nums.size()>K) return -1;
        // Write your code here.
        int maxi = INT_MIN;
       
        for(int i=0; i<nums.size(); i++){
            maxi = max(maxi, nums[i]);
        }
        int i = 1, j=maxi;
        while(i<=j){
            int mid = (i+j)/2;
            if(totalDiv(nums,mid,K)){
                j = mid - 1;
            }
            else{
                i = mid + 1;
            }
        }
        return i;
    }
};


//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends