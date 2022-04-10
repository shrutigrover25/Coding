class Solution {
public:
    
    int fib(int n) {
        
     int dp[n+2];
     memset(dp,-1,sizeof(dp));
    
      if(n==0)
      {
          return dp[0]=0;
      }
        
      if(n==1)
      {
          return dp[1]=1;
      }        
        
      if(dp[n]!=-1)
      {
          return dp[n];
      }
        
      else
      {
          return dp[n]=fib(n-1)+fib(n-2);
      }
        
    }
};