class Solution {
public:
    string getHint(string secret, string guess) {
        
        map<char,int>s,g;
        int cow=0;
        int bull=0;
        
        for(int i=0;i<secret.length();i++)
        {
            if(secret[i]==guess[i])
            {
                bull++;
            }
            
            else
            {
                s[secret[i]]++;
                g[guess[i]]++;
            }
        }
        
        for(auto it:s)
        {
            for(auto pk:g)
            {
                if(it.first==pk.first)
                {
                    cow+=it.second<pk.second?it.second:pk.second;
                }
            }
        }
        
        return to_string(bull)+'A'+to_string(cow)+'B';
        
    }
};