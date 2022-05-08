// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        
        int low=0;
        int high=n-1;
        
        
        while(low<high)
        {
            while(arr[low]==0 && low<high)
            {
                low++;
            }
            
            while(arr[high]==1 && low<high)
            {
                high--;
            }
            
            if(low<high && arr[low]==1 && arr[high]==0)
            {
                arr[low]=0;
                arr[high]=1;
                low++;
                high--;
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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregate0and1(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends