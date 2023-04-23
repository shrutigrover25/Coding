class Solution {
public:
    string removeStars(string s) {
        
        int n=s.length();
        string ans="";
        
        for(auto it:s)
        {
            if(it!='*')
            {
                ans+=it;
            }
            
            else
            {
                ans.pop_back();
            }
        }
        
        return ans;
        
    }
};