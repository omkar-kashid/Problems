//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
         long sum1=0;
    long sum2=0;
    int i=0;
    int j=n-1;
    sum1+=a[i];
    sum2+=a[j];

 
       while(i<n)
       {
           if(sum1==sum2)
          { 
            if(j-i==2)
            return j;
            else
            {
                i++;j--;
                sum1+=a[i];
                sum2+=a[j];
            }
          }
          else if(sum1>sum2)
         {
             j--;
             sum2+=a[j];
         }
          else if(sum2>sum1)
         {
             i++;
             sum1+=a[i];
         }
          
       }
       return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends