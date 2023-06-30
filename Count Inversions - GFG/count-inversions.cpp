//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
  //  long long int count = 0;
    long long int merge(long long arr[], long long l, long long m, long long r)
    {
         // Your code here
         vector<long long> temp;
         long long int count = 0;
         long long left=l;
         long long right=m+1;
         while(left<=m && right<=r){
             if(arr[left]<=arr[right]){
                 temp.push_back(arr[left]);
                 left++;
             }
             else
             {
                 temp.push_back(arr[right]);
                 count += (m-left+1);
                 right++;
             }
             
         }
         while(left<=m){
             temp.push_back(arr[left]);
             left++;
         }
         while(right<=r){
             temp.push_back(arr[right]);
             right++;
         }
         for(long long i=l; i<=r; i++){
             arr[i]=temp[i-l];
         }
         return count;
        
    }
    long long int mergeSort(long long arr[], long long l, long long r)
    {
        //code here
        long long int count = 0; 
        if(l>=r)
        return count;
        long long mid = (l+r)/2;
        count += mergeSort(arr, l, mid);
        count += mergeSort(arr, mid+1, r);
        count += merge(arr,l,mid,r);
        return count;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return mergeSort(arr,0, N-1);
        
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends