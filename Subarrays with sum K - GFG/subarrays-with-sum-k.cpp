//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        // code here
        long long sum = 0;
        int count=0;
        map<long long, int> mpp;
        for(int i=0; i<N; i++){
            sum += Arr[i];
            if(sum==k) 
                count++;
            long long required = sum - k;
            if(mpp.find(required)!=mpp.end()){
                count += mpp[required];
            }
            mpp[sum]++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends