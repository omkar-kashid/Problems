//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    bool isHappy(int N){
        if(N==1 || N==7)return 1; // 1 and 7 are happy no.
        if(N<10) return 0;
        int sum=0;
        while(N){
            sum+=(N%10)*(N%10);
            N=N/10;
        }
        return isHappy(sum)?1:0;
    }
    int nextHappy(int N){
        // code here
        int maxi = INT_MAX;
        for(int i=N+1; i<=maxi; i++){
            if(isHappy(i)) return i;
        }
        return 0;
        
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
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends