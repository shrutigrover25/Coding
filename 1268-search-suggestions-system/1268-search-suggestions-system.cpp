class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        
        vector<vector<string>>result(searchWord.length());
        
        sort(products.begin(),products.end());
        
        for(auto p:products)
        {
            int i=0;
            
            while(i<p.length() &&  i<searchWord.length())
            {
                if(p[i]==searchWord[i])
                {
                    if(result[i].size()<3)
                    {
                    result[i].push_back(p);
                    }
                }
                
                else
                {
                    break;
                }
                
                i++;
            }
        }
        
        return result;
    }
};