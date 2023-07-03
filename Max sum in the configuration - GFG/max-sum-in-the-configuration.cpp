//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}

// } Driver Code Ends


/*You are required to complete this method*/
int max_sum(int A[],int N)
{
//Your code here
     int s=0,t=0;
    for (int i=0;i<N;i++) 
    {
        s=s+A[i]*i;
        t+=A[i];
    }
    int ans=s;
    for (int i=N-1;i>=0;i--)
    {
        s-=(long long)A[i]*N;
        s+=t;
        ans=max(ans,s);
    }
    return  ans;
    
    // s 0 11 3 17 13 27 15 29 -3 11
    // t 0 14
    //ans 11 17 27 29
}