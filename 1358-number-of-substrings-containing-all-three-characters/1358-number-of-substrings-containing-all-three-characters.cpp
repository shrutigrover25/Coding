class Solution {
public:
    int numberOfSubstrings(string s) {
        
        int l=0;
        int r=0;
        
        map<char,int>mp;
        
        int count=0;
        
        int n=s.length()-1;
        
        for(int i=0;i<s.length();i++)
        {
            mp[s[r]]++;
            
            while(mp['a'] && mp['b'] && mp['c'])
            {
                mp[s[l]]--;
                
                count+=1+(n-r);
                
                l++;
        
            }
            
            
            r++;
        }
        
        return count;
    }
};