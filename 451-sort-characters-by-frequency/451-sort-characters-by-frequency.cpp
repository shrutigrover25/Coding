class Solution {
public:
    typedef pair<int,char> ppi;
    string frequencySort(string s) {
        
        priority_queue<ppi>pq;
        unordered_map<char,int>mp;
        
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
            
        }
        
        string ppp="";
        
        while(pq.size()>0)
        {
            int freq=pq.top().first;
            char ele=pq.top().second;
            
            for(int i=1;i<=freq;i++)
            {
                ppp+=ele;
            }
            
            pq.pop();
        }
        
        
        return ppp;
    }
};