//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    
    int fact(int n){
        if(n==0) return 0;
        if(n==1 || n==2) return n;
        return n*fact(n-1);
    }
    
    vector<string> permutation(string s)
    {
        //Your code here
        int n=s.length();
       vector<string >ans;
       ans.push_back(s);
       
       int d=fact(n);
       for(int i=1;i<d;i++){
           next_permutation(s.begin(),s.end());
           ans.push_back(s);
       }
       sort(ans.begin(),ans.end());
       return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends