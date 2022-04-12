class Solution {
public:
    
    
    
    int deleteAndEarn(vector<int>& nums) {
        
        int max_ele=0;
        map<int,int>mp;
        int n=nums.size();
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            
            if(nums[i]>max_ele)
            {
                max_ele=nums[i];
            }
        }
        
        vector<int>dp(max_ele+1,0);
        
        if(n==1)
        {
            return nums[0];
        }
        
        if(n==2)
        {
            if(nums[0]==nums[1])
            {
                return nums[0]+nums[1];
            }
            
            else
            {
                if(abs(nums[0]-nums[1])>1)
                {
                    return nums[0]+nums[1];
                }
                
                else if(nums[0]>nums[1])
                {
                    return nums[0];
                }
                
                else
                {
                    return nums[1];
                }
            }
        }
        
        
       dp[0]=0;
       dp[1]=1*mp[1];
        
        for(int i=2;i<=max_ele;i++)
        {
            int x=dp[i-2]+(i*mp[i]);
            int y=dp[i-1];
            
            dp[i]=max(x,y);
        }
        
        return dp[max_ele];
        
        
    }
};