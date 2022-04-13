class Solution {
public:
    
   int s[205][20001];
    
int subset(vector<int>nums,int n, int sum)
{
    if(sum==0)
        return true;
    
    if(n==0)
        return false;
    
    if(s[n][sum]!=-1)
    {
        return s[n][sum];
    }
    if(nums[n-1]<=sum)
    {
        s[n][sum]=subset(nums,n-1,sum-nums[n-1])|| subset(nums,n-1,sum);
    }
    
    else
    {
        s[n][sum]=  subset(nums,n-1,sum);
    }
    
    return s[n][sum];
}
    
    
    bool canPartition(vector<int>& nums) {
        
        int n=nums.size();
        int sum=0;
        memset(s,-1,sizeof(s));
       
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        
        if(sum%2!=0)
        {
            return false;
        }
        
        else{
             return subset(nums,n,sum/2);
        }
        
    }
};