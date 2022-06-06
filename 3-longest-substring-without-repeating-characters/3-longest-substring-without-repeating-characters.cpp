class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        map<char,int>mp;
        
        int j=0;
        int i=0;
        int mx=0;
        
        while(j<s.size())
        {
            
            mp[s[j]]++;
            
            if(mp.size()==j-i+1)
            {
                mx=max(mx,j-i+1);
                j++;
            }
            
            else if(mp.size()<j-i+1)
            {
                while(mp.size()<j-i+1)
                {
                    mp[s[i]]--;
                    
                    if(mp[s[i]]==0)
                    {
                        mp.erase(s[i]);
                    }
                    
                    i++;
                }
                
                j++;
            }
        }
        
        return mx;
        
    }
};