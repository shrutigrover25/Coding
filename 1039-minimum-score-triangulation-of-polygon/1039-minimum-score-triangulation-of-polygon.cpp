class Solution {
public:
  
int solve(vector<int>&values, int i, int j, vector<vector<int>>&dp)
{
    if(i>=j)
    {
        return 0;
    }
    
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    
    int minm=INT_MAX;
    
    for(int k=i;k<=j-1;k++)
    {
        int ans=solve(values,i,k,dp)+solve(values,k+1,j,dp)+values[i-1]*values[k]*values[j];
        
        minm=min(minm,ans);
    }
    
    return dp[i][j]=minm;
}
    
    int minScoreTriangulation(vector<int>& values) {
        
        int n=values.size();
        vector<vector<int>>dp(100,vector<int>(100,-1));
        int ans= solve(values,1,n-1,dp);
        return ans;
        
    }
};