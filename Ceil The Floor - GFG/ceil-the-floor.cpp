//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends



int floor(int arr[], int n, int x)
{
    int low=0;
    int high=n-1;
    
    int ans=-1;
    
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        
        if(arr[mid]==x)
        {
            return arr[mid];
        }
        
        else if(arr[mid]<x)
        {
            ans=arr[mid];
            low=mid+1;
        }
        
        else
        {
            high=mid-1;
        }
    }
    
    return ans;
}

int ceil(int arr[], int n, int x)
{
    int low=0;
    int high=n-1;
    
    int ans=-1;
    
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        
        if(arr[mid]==x)
        {
            return arr[mid];
        }
        
        else if(arr[mid]<x)
        {
            
            low=mid+1;
        }
        
        else
        {
            ans=arr[mid];
            high=mid-1;
        }
    }
    
    return ans;
}
pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    
    pair<int,int>p;
    
    sort(arr,arr+n);
    
    int ans=floor(arr,n,x);
    
    int res=ceil(arr,n,x);
    
    p={ans,res};
    
    return p;
    // code here
}