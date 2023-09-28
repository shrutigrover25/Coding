//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
     void toposort(int i, vector<int>&vis, stack<int>&st, vector<pair<int,int>>adj[])
     {
         vis[i]=1;
         
         for(auto it:adj[i])
         {
             int v=it.first;
             if(!vis[v])
             {
                 toposort(v,vis,st,adj);
             }
         }
         
         st.push(i);
     }
  
     vector<int>callfunc(int N, int M, vector<vector<int>>&edges)
     {
         vector<pair<int,int>>adj[N];
         
         for(int i=0;i<M;i++)
         {
             int u=edges[i][0];
             int v=edges[i][1];
             int w=edges[i][2];
             
             adj[u].push_back({v,w});
         }
         
         vector<int>dist(N);
         
         for(int i=0;i<N;i++)
         {
             dist[i]=1e9;
         }
         
         stack<int>st;
         
         vector<int>vis(N,0);
         
         for(int it=0;it<N;it++)
         {
             if(!vis[it])
             {
                 toposort(it,vis,st,adj);
             }
         }
         
         dist[0]=0;
         
         while(!st.empty())
         {
             int n=st.top();
             st.pop();
             
             for(auto it:adj[n])
             {
                 
                 int v=it.first;
                 int w=it.second;
                 if(dist[n]+w<dist[v])
                 {
                     dist[v]=dist[n]+w;
                 }
             }
         
         
         }
         
         for (int i = 0; i < N; i++) {
        if (dist[i] == 1e9) dist[i] = -1;
      }
      return dist;
         
         
     }
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
         
         
         vector<int>dist=callfunc(N,M,edges);
         
         return dist;
         
        // code here
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends