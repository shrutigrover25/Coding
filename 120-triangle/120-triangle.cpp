class Solution {
public:
    
int solve(vector<vector<int>>&triangle, vector<vector<int>>&dp,int n, int i, int j)
{
    if(i==n-1)
    {
        return triangle[i][j];
    }
    
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    
    int ans1=triangle[i][j]+solve(triangle,dp,n,i+1,j+1);
    int ans2=triangle[i][j]+solve(triangle,dp,n,i+1,j);
    dp[i][j]=min(ans1,ans2);
    return dp[i][j];
}
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
		vector<vector<int>>dp(n, vector<int>(n, -1));
		return solve(triangle,dp,n,0,0);
        
    }
};