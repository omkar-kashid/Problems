//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
         vector<int> v(2,0);
        for(int i=0;i<N;i++){
            if(bills[i]==5)
                v[0]++;
            else if(bills[i]==10){
                if(v[0]>=1){
                    v[0]--;
                    v[1]++;
                }
                else
                    return false;
            }
            else{
                if(v[0]>=1 && v[1]>=1){
                    v[0]--;
                    v[1]--;
                }
                else if(v[0]>=3){
                    v[0]-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends