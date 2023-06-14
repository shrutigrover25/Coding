class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.length();
        
        int i=0;
        int j=0;
        
        unordered_map<char,int>mp;
        int maxii=0;
        while(j<n)
        {
            mp[s[j]]++;
            
            if(mp.size()==j-i+1)
            {
                maxii=max(maxii,j-i+1);
                
            }
            
            if(mp.size()<j-i+1)
            {
                while(mp.size()!=j-i+1)
                {
                    mp[s[i]]--;
                    
                    if(mp[s[i]]==0)
                    {
                        mp.erase(s[i]);
                    }
                    
                    i++;
                }
            }
            
            j++;
        }
        
        return maxii;
        
    }
};