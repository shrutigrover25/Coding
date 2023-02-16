class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<deck.size();i++)
        {
            mp[deck[i]]++;
        }
        
        int gcd=0;
        
        for(auto it:mp)
        {
            gcd=__gcd(gcd,it.second);
        }
        
        if(gcd>1)
        {
            return true;
        }
        
        return false;
        
    }
};