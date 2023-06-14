//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int r=0;
    int l=0;
    
    int ans=-1;
    int n=s.length();
    
    map<char,int>mp;
    
    while(r<n)
    {
        mp[s[r]]++;
        
        while(mp.size()>k)
        {
            mp[s[l]]--;
            
            if(mp[s[l]]==0)
            {
                mp.erase(s[l]);
            }
            
            l++;
        }
        
        if(mp.size()==k)
        {
            ans=max(ans,r-l+1);
        }
        
        r++;
        
    }
    
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends