//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        //Write your code here
        int c=0,d=0,cnt=0,a=0,b=0;
        for(int i=0;i<str.size();i++)
        {
            
            if(str[i]=='0')
            {
                c++;
                a++;
            }
            else
            {
                d++;
                b++;
            }
            if(i>0)
            {
                if(c==d)
                {
                    cnt++;
                    c=0,d=0;
                }
            }
            // cout<<c<<" "<<d<<endl;
        }
        if(a!=b)
        return -1;
        return cnt;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends