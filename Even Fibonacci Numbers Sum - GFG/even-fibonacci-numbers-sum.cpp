//{ Driver Code Starts

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
public:

    long long evenFibSum(int N){
        // code here
         if(N<2) return 0;
        int first =0 ;
        int second = 1;
        int answer = 0;
        int curr = 1;
        while(curr<=N)
        {
            if(curr%2==0)
                answer+=curr;
            curr = first + second;
            first = second;
            second = curr;
        }
        return answer;
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
        cin>>N;
        Solution ob;
        cout << ob.evenFibSum(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends