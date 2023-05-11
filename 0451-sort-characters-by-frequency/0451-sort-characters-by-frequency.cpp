class Solution {
public:
    string frequencySort(string s) {
        
        string str="";
        
        unordered_map<char,int>mp;
        
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        
        priority_queue<pair<int,char>>pq;
        
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
        }
        
        
        while(!pq.empty())
        {
            int freq=pq.top().first;
            char chari=pq.top().second;
            pq.pop();
            
            for(int i=0;i<freq;i++)
            {
                str+=chari;
            }
        }
        
        return str;
    }
};