class Solution {
public:
    
int findans(string text1,string text2,int m, int n,vector<vector<int>>&dp)
{
    for(int i=0;i<m+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }
        }
    }
    
    for(int i=1;i<m+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(text1[i-1]==text2[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            
            else
            {
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    
    return dp[m][n];
}

    
    int longestCommonSubsequence(string text1, string text2) {
        
        int  m=text1.length();
        int n=text2.length();
         vector<vector<int> > dp(m + 1, vector<int>(n + 1, -1));
        return findans(text1,text2,m,n,dp);
        
    }
};