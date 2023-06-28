//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  int requiredTime(vector<int> &piles, int hours){
      int ans=0;
      for(int i=0; i<piles.size(); i++){
          if(piles[i]%hours==0){
              ans += (piles[i]/hours);
          }
          else{
              ans += (piles[i]/hours)+1;
          }
      }
      return ans;
  }
  
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
        int maxi = INT_MIN;
        for(int i=0; i<N; i++){
            maxi = max(maxi,piles[i]);
        }
        int ans;
        int i=1, j=maxi;
        while(i<=j){
            int mid = (i+j)/2;
            if(requiredTime(piles, mid)<=H){
                ans = mid;
                j = mid -1;
            }
            else if(requiredTime(piles,mid)>H){
                i = mid + 1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends