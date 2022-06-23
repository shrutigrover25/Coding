// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
bool issafe(int newx, int newy,vector<vector<bool>>&visited, vector<vector<int>> &m, int n)
{
    if((newx>=0 && newx<n)&& (newy>=0 && newy<n) && visited[newx][newy]!=1 && m[newx][newy]==1)
    {
        return true;
    }
    
    else
    {
        return false;
    }
}

void findans(int x, int y, vector<vector<int>> &m, int n, vector<string>&ans,vector<vector<bool>>&visited, string path)
{
    if(x==n-1 && y==n-1)
    {
        ans.push_back(path);
    }
    
    //DLRU
    visited[x][y]=1;
    
    if(issafe(x+1,y,visited,m,n))
    {
        findans(x+1,y,m,n,ans,visited,path +'D');
    }
    
    if(issafe(x,y-1,visited,m,n))
    {
        findans(x,y-1,m,n,ans,visited,path +'L');
    }
    
    if(issafe(x,y+1,visited,m,n))
    {
        findans(x,y+1,m,n,ans,visited,path +'R');
    }
    
    if(issafe(x-1,y,visited,m,n))
    {
        findans(x-1,y,m,n,ans,visited,path +'U');
    }
    
    visited[x][y]=0;
}

    vector<string> findPath(vector<vector<int>> &m, int n) {
        
        vector<string>ans;
        vector<vector<bool>>visited(n,vector<bool>(n,0));
        
        string path="";
        if(m[0][0]==0)
        {
            return ans;
        }
        
        
        findans(0,0,m,n,ans,visited,path);
     
         return ans;   // Your code goes here
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends