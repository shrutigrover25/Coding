class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n=nums.size();
        unordered_set<int>s;
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            if(s.find(nums[i]-1)!=s.end())
            {
                continue;
            }
            
            int j=nums[i];
            
            while(s.find(j)!=s.end())
            {
                j++;
            }
            
            ans=max(ans,j-nums[i]);
            
            
        }
        
        return ans;
    }
};