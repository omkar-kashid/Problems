//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    bool solve(vector<vector<vector<int>>>&dp, int i, int k, int target, vector<int>&arr){
      if(i>=arr.size())return false;
      if(k==0 and target==0)return true;
      if(dp[i][target][k]!=-1)return dp[i][target][k];

      if(target>=arr[i]){
          return dp[i][target][k] = solve(dp,i,k-1,target-arr[i], arr)|| solve(dp,i+1,k,target,arr);
      }
      else return dp[i][target][k] =  solve(dp,i+1,k,target,arr);
  }
    bool makeChanges(int n, int k, int target, vector<int> &arr) {
        // code here
        vector<vector<vector<int>>>dp(n , vector<vector<int>>(target+1, vector<int>(k+1,-1)));
        return solve(dp,0,k,target, arr);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int N;
        scanf("%d", &N);

        int K;
        scanf("%d", &K);

        int target;
        scanf("%d", &target);

        vector<int> coins(N);
        Array::input(coins, N);

        Solution obj;
        bool res = obj.makeChanges(N, K, target, coins);

        cout << res << endl;
    }
}

// } Driver Code Ends