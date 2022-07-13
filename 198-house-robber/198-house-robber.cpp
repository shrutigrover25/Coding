class Solution {
public:
    
int findans(vector<int>&nums, int n, vector<int>&dp, int index)
{
    if(index>=n)
    {
        return 0;
    }
    
    if(dp[index]!=-1)
    {
        return dp[index];
    }
    
    int pick=nums[index]+findans(nums,n,dp,index+2);
    
    int notpick=0+findans(nums,n,dp,index+1);
    
    int ans=max(pick,notpick);
    
    return dp[index]=ans;
    
}
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>dp(n+1,-1);
        
        return findans(nums,n,dp,0);
        
    }
};