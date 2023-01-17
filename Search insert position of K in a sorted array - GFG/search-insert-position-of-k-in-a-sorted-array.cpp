//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
       int start = 0;
    int end = N - 1;
    // Traverse the search space
    while (start <= end) {
        int mid = (start + end) / 2;
        // If K is found
        if (Arr[mid] == k)
            return mid;
        else if (Arr[mid] < k)
            start = mid + 1;
        else
            end = mid - 1;
    }
    // Return insert position
    return end + 1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends