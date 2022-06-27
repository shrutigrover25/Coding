// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:

void findans(int index, int sum, vector<int>&arr, int n, vector<int>&subset)
{
    if(index==n)
    {
        subset.push_back(sum);
        return;
    }
    
    findans(index+1,sum+arr[index],arr,n,subset);
    
    findans(index+1,sum,arr,n,subset);
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>subset;
        
        findans(0,0,arr,N,subset);
        
        sort(subset.begin(),subset.end());
        
        return subset;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends