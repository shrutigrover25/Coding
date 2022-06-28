class Solution {
public:
    
int dp[1001][1001];
    
int findans(string &s, string &p, int n, int m)
{
    if(n==0 || m==0)
    {
        return 0;
    }
    
    if(dp[n][m]!=-1)
    {
        return dp[n][m];
    }
    
    if(s[n-1]==p[m-1])
    {
        dp[n][m]= 1+findans(s,p,n-1,m-1);
    }
    
    else
    {
        dp[n][m]=max(findans(s,p,n-1,m),findans(s,p,n,m-1));
    }
    
    return dp[n][m];
}
    int minInsertions(string s) {
        
        int n=s.length();
        
        string p=s;
        
        reverse(p.begin(),p.end());
        memset(dp,-1,sizeof(dp));
        
       int res= findans(s,p,n,n);
        
        int ans=n-res;
        
        return ans;
        
    }
};