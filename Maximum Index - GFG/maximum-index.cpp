//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
         int right[N]; // max j
        int left[N];  // min i
        left[0] = A[0];
        right[N-1] = A[N-1];
        for(int i=1; i<N; i++){
            left[i] = min(left[i-1], A[i]);
        }
        for(int i=N-2; i>=0; i--){
            right[i] = max(right[i+1], A[i]);
        }
        int i=0, j=0, ans = 0;
        while(i<N && j<N){
            if(left[i]<=right[j]){
                ans = max(ans, j-i);
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
    
    // left 34 8 8 3 2 2 2 2 1
    // right 80 80 80 80 80 80 33 33 1
    
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends