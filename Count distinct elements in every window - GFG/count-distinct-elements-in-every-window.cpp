//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int arr[], int n, int k)
    {
        //code here.
        
        map<int,int>mp;
        
        int i=0;
        
        for(;i<k;i++)
        {
            mp[arr[i]]++;
        }
        

        
        int j=0;
        vector<int>v;
        v.push_back(mp.size());
        
        while(i<n)
        {
            
           
           mp[arr[j]]-=1;
           
           if(mp[arr[j]]==0)
           {
               mp.erase(arr[j]);
           }
           
           mp[arr[i]]+=1;
           
           i++;
           j++;
           
           v.push_back(mp.size());
        }
        
        
        
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends