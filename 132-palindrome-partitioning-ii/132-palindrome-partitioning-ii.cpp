class Solution {
public:
    
bool ispalindrome(string &s, int i, int j)
{
    while(i<j){
            if(s[i]!=s[j]){
                return 0;
            }
            i++;
            j--;
        }
        return 1 ;
}
    
int solve(string &s,int i, int j,  vector<vector<int>>&dp
         )
{
   if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    
    if(ispalindrome(s,i,j))
    {
        return dp[i][j]=0;
    }
    
    int minm=INT_MAX;
    
    
    
    for(int k=i;k<=j-1;k++)
    {
        if(ispalindrome(s,i,k))
        {
        int ans=1+solve(s,k+1,j,dp);
        minm=min(ans,minm);
        }
    }
    
    return dp[i][j]=minm;
}
    int minCut(string s) {
        
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solve(s,0,n-1,dp);
        
    }
};