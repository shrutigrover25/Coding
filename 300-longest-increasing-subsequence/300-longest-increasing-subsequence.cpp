class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n=nums.size();
        set<int>s;
        vector<int>v;
        
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        
         set<int>::iterator it;
        
     
        for(it=s.begin();it!=s.end();it++)
        {
            v.push_back(*it);
        }
        
        int m=v.size();
        int dp[n+1][m+1];
        
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0||j==0)
                {
                    dp[i][j]=0;
                }
            }
        }
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(nums[i-1]==v[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        return dp[n][m];
        
    }
};