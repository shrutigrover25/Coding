// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        
        int n=s.length();
        map<char,int>mp;
        
        int i=0;
        int j=0;
        int maxii=INT_MIN;
        
        if(s.length()<k)
        {
            return -1;
        }
        
        while(j<s.size())
        {
            mp[s[j]]++;
            
            while(mp.size()>k)
            {
                mp[s[i]]--;
                
                if(mp[s[i]]==0)
                {
                    mp.erase(s[i]);
                }
                
                i++;
            }
            
            if(mp.size()==k)
            {
            maxii=max(j-i+1,maxii);
            }
            
            j++;
        }
        
        if(maxii==INT_MIN)
        {
            return -1;
        }
        return maxii;
    // your code here
    }
};

// { Driver Code Starts.
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