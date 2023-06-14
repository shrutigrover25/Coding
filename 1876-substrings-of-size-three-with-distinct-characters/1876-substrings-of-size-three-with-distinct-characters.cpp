class Solution {
public:
    int countGoodSubstrings(string s) {
        
        int n=s.length();
        
        int i=0;
        int j=0;
        int k=3;
        
        map<char,int>mp;
        
        for(i=0;i<k;i++)
        {
            mp[s[i]]++;
        }
        
        int count=0;
        
        
        while(i<n)
        {
            if(mp.size()==k)
            {
                count++;
            }
            
            mp[s[i]]++;;
            
            
            
            mp[s[j]]--;
            if(mp[s[j]]==0)
            {
                mp.erase(s[j]);
            }
            
            i++;
            j++;
            
            
        }
        
        if(mp.size()==k)
        {
            count++;
        }
        
        
        return count;
        
        
        
    }
};