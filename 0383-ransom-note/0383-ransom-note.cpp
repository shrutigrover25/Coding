class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        map<char,int>mp1;
        
        for(int i=0;i<magazine.length();i++)
        {
            mp1[magazine[i]]++;
        }
        
        for(auto it:ransomNote)
        {
            if(mp1[it]-- <=0 )
            {
                return false;
            }
        }
        
        return true;
        
    }
};