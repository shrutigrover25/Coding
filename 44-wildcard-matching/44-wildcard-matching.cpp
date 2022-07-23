class Solution {
public:
    
bool ans(int i, int j, string &s, string &p, vector<vector<int>>&dp)
{
    if(i<0 && j<0)
    {
        return true;
    }
    
    if(j<0)
    {
        return false;
    }
    
    if(i<0)
    {
        for(int k=0;k<=j;k++)
        {
            if(p[k]!='*')
            {
                return false;
            }
        }
        
        return true;
    }
    
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    
    bool res=false;
    
    if(s[i]==p[j] || p[j]=='?')
    {
        res=ans(i-1,j-1,s,p,dp);
    }
    
    if(p[j]=='*')
    {
        res= res|ans(i-1,j,s,p,dp);
        res=res | ans(i,j-1,s,p,dp);
    }
    
    return dp[i][j]=res;
    
}
    bool isMatch(string s, string p) {
        
        int n=s.length();
        int m=p.length();
        
        vector<vector<int>>dp(n,vector<int>(m,-1));
        
        return ans(n-1,m-1,s,p,dp);
        
    }
};