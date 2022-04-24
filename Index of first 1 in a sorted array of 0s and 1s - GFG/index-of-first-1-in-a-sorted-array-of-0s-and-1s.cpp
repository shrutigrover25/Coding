// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
        // Your code goes here
        int start=0;
        int end=n-1;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            
            if(a[mid]==1 && a[mid-1]==0)
            {
                return mid;
            }
            
            else if(a[mid]==1)
            {
                end=mid-1;
            }
            
            else
            {
                start=mid+1;
            }
        }
        
        return -1;
    }
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.firstIndex(a, n) << endl;
    }
}  // } Driver Code Ends