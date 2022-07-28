class Solution {
public:
    vector<vector<double>>dp;
double callfunc(int A, int B)
{
    if(A<=0 && B<=0)
    {
        return 0.5;
    }
    
    if(A<=0 && B>=0)
    {
        return 1.0;
    }
    
    if(A>=0 && B<=0)
    {
        return 0.0;
    }
    
    if(dp[A][B]!=-1)
    {
        return dp[A][B];
    }
    
    return dp[A][B]=0.25*(callfunc(A-100,B)+callfunc(A-75,B-25)+callfunc(A-50,B-50)+callfunc(A-25,B-75));
}
    double soupServings(int n) {
        
        if(n>5000)
        {
            return 1.0;
        }
        dp.resize(n+1,vector<double>(n+1,-1.0));
        
        return callfunc(n,n);
        
    }
};