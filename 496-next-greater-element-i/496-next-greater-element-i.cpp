class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int>mp;
        stack<int>st;
        
        int n=nums2.size();
        
        for(int i=n-1;i>=0;i--)
        {
            int ele=nums2[i];
            
            while(!st.empty() && st.top()<=ele)
            {
                st.pop();
                
            }
            
            int res;
            
            if(st.empty())
            {
                res=-1;
            }
            
            else
            {
                res=st.top();
            }
            
            mp.insert({nums2[i],res});
            st.push(nums2[i]);
        }
        
        vector<int>ans;
        
        for(auto it:nums1)
        {
            ans.push_back(mp[it]);
        }
        
        return ans;
        
    }
};