class Solution {
public:
    
static bool cmp(pair<int,int>&a, pair<int,int>&b)
{
    if(a.first==b.first)
    {
        return a.second>b.second;
    }
    
    return a.first<b.first;
}
    vector<int> frequencySort(vector<int>& nums) {
        
        vector<int>ans;
        vector<pair<int,int>>v;
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it:mp)
        {
            v.push_back({it.second,it.first});
        }
        
        sort(v.begin(),v.end(),cmp);
        
        for(int i=0;i<v.size();i++)
        {
            while(v[i].first)
            {
                ans.push_back(v[i].second);
                v[i].first--;
            }
        }
        
        return ans;
        
    }
};