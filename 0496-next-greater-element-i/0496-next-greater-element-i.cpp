class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>ans;
        unordered_map<int,int>mp;
        
        int n=nums2.size();
        stack<int>st;
        
        for(int i=n-1;i>=0;i--)
        {
            
            int res;
            int curr=nums2[i];
            
            while(!st.empty() && st.top()<=curr)
            {
                st.pop();
            }
            
            
            if(st.empty())
            {
                res=-1;
            }
            
            else
            {
                res=st.top();
            }
            
            st.push(curr);
            
            mp.insert({curr,res});
        }
        
        for(auto x:nums1)
        {
            ans.push_back(mp[x]);
        }
        
        
        return ans;
       
        
    }
};