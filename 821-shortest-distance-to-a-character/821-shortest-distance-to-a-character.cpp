class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        
        vector<int>pos;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==c)
            {
                pos.push_back(i);
            }
        }
        
       
        vector<int>ans;
        
        for(int i=0;i<s.size();i++)
        {
           int short_d=INT_MAX;
            
            for(int j=0;j<pos.size();j++)
            {
                short_d= min(short_d,abs(i-pos[j]));
            }
            
            ans.push_back(short_d);
        }
        
        return ans;
        
    }
};