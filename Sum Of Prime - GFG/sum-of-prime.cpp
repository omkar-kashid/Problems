//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    bool isPrime(int n){
        for(int i=2; i*i<=n; i++){
            if(n%i==0) return 0;
        }
        return 1;
    }
    vector<int> getPrimes(int N) {
        // code here
        vector<int> ans;
       // map<int,int> mpp;
        for(int i=2; i<=N; i++){
            int req = N - i;
            if(isPrime(i) && isPrime(req) && req>=2){
                return {i, req};
                // if(mpp.find(i)!=mpp.end()){
                //     return {req,i};
                // }
                // mpp[req]++;
            }
        }
        // for(auto it: mpp){
        //     int req = N - it.first;
        //     if(mpp.find(req)!=mpp.end()){
        //         return {it.first,req};
        //     }
        // }
        return {-1,-1};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        vector<int> ptr = ob.getPrimes(N);
        cout << ptr[0]<<" "<<ptr[1] << endl;
    }
    return 0;
}
// } Driver Code Ends