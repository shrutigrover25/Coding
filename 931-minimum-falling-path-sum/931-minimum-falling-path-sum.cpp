class Solution {
public:
    int solve(vector<vector<int>>& matrix,int i,int j,int n,vector<vector<int>>& dp){
        if(i<0 || i>=n || j<0 || j>=n)
            return INT_MAX;
        
        if(i == n-1)
            return dp[i][j] = matrix[i][j];
        
        if(dp[i][j] != INT_MIN)
            return dp[i][j];
        
        return dp[i][j] = matrix[i][j] + min(solve(matrix,i+1,j-1,n,dp),min(solve(matrix,i+1,j,n,dp),solve(matrix,i+1,j+1,n,dp)));
}
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int ans = INT_MAX;
        vector<vector<int>> dp(n,vector<int>(n,INT_MIN));
        for(int j=0;j<n;j++){
            ans = min(ans,solve(matrix,0,j,n,dp));
        }
        
        return ans;
    }
};