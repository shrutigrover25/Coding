class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int>mp;
        vector<string>v;
        
        int n=words.size();
        
        for(int i=0;i<n;i++)
        {
            mp[words[i]]++;
        }
        
        auto comp=[](const pair<int,string>&a, const pair<int,string>&b)
        {
            if(a.first!=b.first)
            {
                return a.first<b.first;
            }
            
            return a.second>b.second;
        };
        
        priority_queue<pair<int,string>,vector<pair<int,string>>,decltype(comp)> pq(comp);
        
        
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
            
            
        }
        
        while(k--)
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        
        return v;
    }
};