class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int>v;
        deque<int>sq;
        
        int j=0;
        int i=0;
        
        while(j<nums.size())
        {
            while(sq.empty()!=1 && nums[j]>sq.back())
            {
                sq.pop_back();
            }
            
            sq.push_back(nums[j]);
            
            if(j-i+1<k)
            {
                j++;
            }
            
            else if(j-i+1==k)
            {
                v.push_back(sq.front());
                
                if(!sq.empty() && nums[i]==sq.front())
                {
                    sq.pop_front();
                }
                
                i++;
                j++;
            }
        }
        
        return v;
        
    }
};