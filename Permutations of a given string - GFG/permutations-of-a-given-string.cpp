//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    
	    int fact(int d){
	        if(d==0) return 0;
	        if(d==1 || d==2) return d;
	        return d*fact(d-1);
	    }
	
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    int n = S.size();
		    int d = fact(n);
		    set<string> ans;
		    sort(S.begin(), S.end());
		    ans.insert(S);
		    for(int i=1; i<d; i++){
		        next_permutation(S.begin(),S.end());
		        ans.insert(S);
		    }
		    vector<string> res(ans.begin(),ans.end());
		    return res;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends