//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
 
  private:
 void dfs(int node, vector<vector<int>>&adj, int V,int vis[],vector<int> p[])
 {
     vis[node]=1;
     
     for(auto it: p[node])
     {
         if(!vis[it])
         {
             dfs(it,adj,V,vis,p);
             
         }
     }
 }
 
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        
        vector<int>p[V];
        int vis[V]={0};
        
        int count=0;
        
        int n=adj.size();
        int m=adj[0].size();
        
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                if(adj[i][j]==1 && i!=j)
                {
                    p[i].push_back(j);
                    p[j].push_back(i);
                }
            }
        }
        
        
        for(int l=0;l<V;l++)
        {
            if(!vis[l])
            {
                count++;
                dfs(l,adj,V,vis,p);
            }
        }
        // code here
        
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends