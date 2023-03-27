class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        int count=0;
        
        for(auto it:mp)
        {
            if(k==0)
            {
               if( it.second>1)
               {
                   count++;
               }
                
            }
            
            else if(mp.find(it.first+k)!=mp.end())
            {
                count++;
            }
            
        }
        
        return count;
                                                                        
        
    }
};