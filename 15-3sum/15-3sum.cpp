class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>ans;
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        
        if(n<3)
        {
            return {};
        }
        
        if(nums[0]>0)
        {
            return {};
        }
        
        for(int i=0;i<n;i++)
        {
            
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            
            int low=i+1;
            int high=n-1;
            
            while(low<high)
            {
                int sum=nums[i];
                sum+=nums[low];
                sum+=nums[high];
                
                if(sum==0)
                {
                   ans.push_back({nums[i],nums[low],nums[high]});
                    
                    
                    while(low<high && nums[low]==nums[low+1])
                    {
                        low++;
                    }
                    
                    while(low<high && nums[high]==nums[high-1])
                    {
                        high--;
                    }
                    
                    low++;
                    high--;
                }
                
                else if(sum<0)
                {
                    low++;
                }
                
                else
                {
                   high--; 
                }
                
            }
                
                
                
            }
        return ans;
        
    }
};