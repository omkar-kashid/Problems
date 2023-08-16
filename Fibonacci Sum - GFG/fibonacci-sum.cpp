//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int mod = 1e9+7;

    void fibsum(long long int N, long long int &sum){
        if(N==0) return;
        if(N==1) return;
        long long int first = 0;
        long long int second = 1;
        long long int ans = 0;
        for(int i=2; i<=N; i++){
            ans = (first + second)%mod;
            first = second;
            second = ans;
            sum = (sum + ans)%mod;
        }
    }
    long long int fibSum(long long int N){
        //code here
        long long int ans = 1;
        fibsum(N,ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.fibSum(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends