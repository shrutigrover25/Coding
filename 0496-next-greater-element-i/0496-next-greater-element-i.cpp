class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>v;
        int n=nums2.size();
        int res;
        stack<int>st;
        map<int,int>mp;
        
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=nums2[i])
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
            
            st.push(nums2[i]);
            
            mp[nums2[i]]=res;
        }
        
        for(auto it:nums1)
        {
            v.push_back(mp[it]);
        }
        
        return v;
        
    }
};