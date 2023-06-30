//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int subArraySum(int arr[], int n, int sum)
    {
    	//code here.
    	unordered_map<int, int> mpp;
    	mpp[0] = 1;
    	int count = 0, preSum = 0;
    	for(int i=0; i<n; i++){
    	    preSum += arr[i];
    	    int required = preSum - sum;
    	    count += mpp[required];
    	    mpp[preSum]++;
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
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution ob;
	    cout<<ob.subArraySum(arr, n, sum);
	    cout<<'\n';
	}
	return 0;
}
// } Driver Code Ends