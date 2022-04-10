class Solution {
public:
    int rob(vector<int>& nums) {
      int n = nums.size();
      vector<int>dp(n,-1); 
      int ans= backtrack(nums,0,n,dp);
      return ans;
    }
    int backtrack(vector<int>&nums,int index,int n,vector<int>&dp){
        if(index>=n){
            return 0;
        }
        if(dp[index]!=-1)
            return dp[index];
        
        // choose not to rob
        int ans1=backtrack(nums,index+1,n,dp);
        // choose to rob and move to 2nd index from the postion
        int ans2=nums[index]+backtrack(nums,index+2,n,dp);
        
        return dp[index]=max(ans1,ans2);
    }
};