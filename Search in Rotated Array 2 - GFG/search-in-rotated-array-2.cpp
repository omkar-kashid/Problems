//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool Search(int N, vector<int>& A, int Key) {
        // Code here
        int i=0, j = N-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(A[mid]==Key){
                return 1;
            }
            if(A[i]==A[mid] && A[mid] == A[j]){
                i++;
                j--;
                continue;
            }
            
            if(A[mid]<=A[j]){
                if(A[mid]<=Key && A[j]>=Key){
                    i = mid + 1;
                }
                else{
                    j = mid -1 ;
                }
            }
            else{
                if(A[mid]>=Key && A[i]<=Key){
                    j = mid -1;
                }
                else{
                    i = mid + 1;
                }
            }
        }
        return false;
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
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends