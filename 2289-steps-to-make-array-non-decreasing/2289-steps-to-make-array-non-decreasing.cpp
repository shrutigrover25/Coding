class Solution {
public:
    int totalSteps(vector<int>& nums) {
        
        int n=nums.size();
        stack<pair<int,int>> st;
        
        int c=0;
        
      
        st.push({nums[n-1],c});
        
        int maxii=0;
        
        
        for(int i=n-2;i>=0;i--)
        {
            int count=0;
            
            while(!st.empty() && nums[i]>st.top().first)
            {
                count++;
                count=max(count,st.top().second);
                st.pop();
            }
            
            maxii=max(count,maxii);
            st.push({nums[i],count});
        }
        
        return maxii;
    }
        
    
};
        
        
       
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        