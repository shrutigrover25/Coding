class Solution {
public:
    typedef pair <int,int> ppi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        priority_queue<ppi,vector<ppi>,greater<ppi>>pq;
        
        map<int,int>mp;
        vector<int>v;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
            
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        
        while(!pq.empty())
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        
        return v;
    }
};