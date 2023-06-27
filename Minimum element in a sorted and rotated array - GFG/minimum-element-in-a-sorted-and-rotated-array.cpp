//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        int i=0;
        int j=n-1;
        int mini = INT_MAX;
        while(i<=j){
            int mid = (i+j)/2;
            if(arr[i] <= arr[mid]){
                mini = min(mini, arr[i]);
                i = mid + 1;
            }
            else{
                mini = min(mini, arr[mid]);
                j = mid - 1;
            }
        }
        return mini;
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends