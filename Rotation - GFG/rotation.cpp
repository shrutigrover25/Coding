// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    
	    int start=0;
	    int end=n-1;
	    
	    while(start<=end)
	    {
	        int mid=start+(end-start)/2;
	        
	        int next=(mid+1)%n;
	        int prev=(mid+n-1)%n;
	        
	        if(arr[mid]<=arr[next] && arr[mid]<=arr[prev])
	        {
	            return mid;
	        }
	        
	        else if(arr[end]>=arr[mid])
	        {
	            end=mid-1;
	        }
	        
	        else
	        {
	            start=mid+1;
	        }
	    }
	    // code here
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends