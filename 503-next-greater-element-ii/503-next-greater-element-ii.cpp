class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        vector<int>ans;
        int n=nums.size();
        stack<int>st;
        
        vector<int>v;
        
        for(int i=n-1;i>=0;i--)
        {
            st.push(nums[i]);
        }
        
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<= nums[i])
            {
                st.pop();
            }
            
            
            if(st.empty())
            {
                v.push_back(-1);
            }
            
            else
            {
                v.push_back(st.top());
            }
            
            st.push(nums[i]);
        }
        
        reverse(v.begin(),v.end());
        
        return v;
    }
};