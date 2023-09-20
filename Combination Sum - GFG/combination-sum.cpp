//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    
    void callfunc(vector<vector<int>>&ans,vector<int>&ds,vector<int>&A,int B,int index, int n)
    {
        
            if(B==0)
            {
                ans.push_back(ds);
                return;
            }
        
        
        
        while(index<A.size() && B-A[index]>=0)
        {
            
                ds.push_back(A[index]);
                callfunc(ans,ds,A,B-A[index],index,n);
                index++;
                ds.pop_back();
            
        }
        
        
        
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        sort(A.begin(),A.end());
        
        A.erase(unique(A.begin(), A.end()), A.end());
        
       
        vector<vector<int>>ans;
        vector<int>ds;
        
        int n=A.size();
        
        callfunc(ans,ds,A,B,0,n);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends