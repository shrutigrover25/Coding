class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        
        vector<vector<string>>ans;
        map<int,map<string,int>>mp;
        
        set<string>s;
        
        for(auto it:orders)
        {
            s.insert(it[2]);
            mp[stoi(it[1])][it[2]]++;
        }
        
        //set --> ceviche, Beef Burrito, Chicken, Wter, Ceviche, Ceviche
        
        // mp --> 3 ceviche -->2
          //      10  beef - 1 // 5 water  1 // 5 ceviche 1 
        // 3 ceviche 1
        
        vector<string>dem;
        dem.push_back("Table");
        
        for(auto it:s)
        {
            dem.push_back(it);
        }
              
        ans.push_back(dem);
        
        for(auto it:mp)
        {
            vector<string>r;
            r.push_back(to_string(it.first));
            
            auto p=it.second;
            
            for(auto k:s)
            {
                r.push_back(to_string(p[k]));
                
                
            }
            
            ans.push_back(r);
        }
        
        return ans;
    }
};